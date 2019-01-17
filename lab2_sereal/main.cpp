#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDataStream>
#include <QRect>

static const char* const FILE_NAME = "test.bin";

class User {
public:
    User() : m_name( "" ), m_age( 0 ) { }

    User( const QString& name, int age ) : m_name( name ), m_age( age ) {
    }

    QString getName() const {
        return m_name;
    }

    int getAge() const {
        return m_age;
    }

    friend QDataStream& operator>>( QDataStream& d, User& u );

private:
    QString m_name;
    int m_age;
};

QDataStream& operator<<( QDataStream& d, const User& u ) {
    d << u.getName() << u.getAge();
    return d;
}

QDataStream& operator>>( QDataStream& d, User& u ) {
    d >> u.m_name >> u.m_age;
    return d;
}

QDebug operator<<( QDebug d, const User& u ) {
    d << QString( "User( %1, %2 )" ).arg( u.getName() ).arg( u.getAge() );
    return d;
}

int main() {
    QFile file( FILE_NAME );
    QDataStream stream( &file );

    file.open( QIODevice::WriteOnly );
    stream << User( "User1", 20 ) << User( "User2", 21 ) << User( "User3", 22 ) << User( "User4", 23 );
    file.close();

    file.open( QIODevice::ReadOnly );
    User u1, u2, u3, u4;
    stream >> u1 >> u2 >> u3 >> u4;
    qDebug() << u1 << u2 << u3 << u4;
    file.close();

    return 0;
}

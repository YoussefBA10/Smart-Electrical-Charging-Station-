#include "connexion.h"

connexion::connexion()
{

}
bool connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("BASEE");
db.setUserName("bouchakour");//inserer nom de l'utilisateur
db.setPassword("bouchakour");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
void connexion::closeConnection(){db.close();}


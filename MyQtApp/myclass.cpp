#include "myclass.h"

MyClass::MyClass()
{
    int myIntVariable = 15;
    QString objectQString = "Hello QString";
    cout << "MyClass muodostin" << endl;
    qDebug() << "Hello!" << objectQString << endl;
    objectQString.setNum(myIntVariable);
    qDebug() << objectQString << endl;
}

MyClass::~MyClass()
{
    cout << "MyClass tuhoaja" << endl;
}

void MyClass::printMyList()
{
    QList<int> integerList = {1, 2, 3};
    for(int i = 0; i < integerList.size(); ++i)
    {
        cout << i << endl;
    }

    QList<QString> stringList = {"yksi", "kaksi", "kolme"};
    QString stringObject;
    foreach (stringObject, stringList)
        qDebug() << stringObject;

}

void MyClass::printMyStack()
{
    QStack<int> stack;
    stack.push(5);
    stack.push(10);
    stack.push(15);

    while(!stack.isEmpty())
        cout << stack.pop() << endl;
}
void MyClass::printMyDirectoryContent()
{
    qDebug() << QDir("F:/L5").entryList() << endl;
}

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
 
 struct Student
    {                   
        char name[30], group[10];
        int marks[4];
        double MidMark;
    };
    
    FILE *fp;
    //заполнение списка студентов
    Student InputList(Student *stGroup, int N)
    {
            for (int i=0; i<N; i++)
            {
            cout<<"\nВведите фамилию "<<i+1<<"-го студента: ";
               cin>>stGroup[i].name;
            cout<<"\nВведите номер группы: ";
               cin>>stGroup[i].group;
            cout<<"\nВведите 4 oценки студента: "<<stGroup[i].name<<endl;
            stGroup[i].MidMark=0;
               for (int j=0; j<4; j++)
                {
                     cin>>stGroup[i].marks[j];
                     stGroup[i].MidMark+=stGroup[i].marks[j];
                }
                stGroup[i].MidMark=stGroup[i].MidMark/4;
            }
            return *stGroup;
            
    }
    
    //просмотр списка студентов
    void ShowList(Student *stGroup, int N)
    {
         for (int i=0; i<N; i++)
         {
             cout<<"\nФИО: "<<stGroup[i].name;
             cout<<"\nГруппа: "<<stGroup[i].group;
             cout<<"\nОценки: ";
             for (int j=0;j<4;j++)
             {
                 cout<<stGroup[i].marks[j]<<" ";
             }
             cout<<"\nСредний балл: "<<stGroup[i].MidMark;
         }
    }
    
  //список успевающих  
  void ListOfAchievers(Student *stGroup, int N)
  {
    fp=fopen("Список успевающих.txt","w+");
    if (fp==NULL) 
    {
       cout<<"Ошибка создания файла!";
    }
    else
    {
        for (int i=0; i<N; i++)
        {
            
            if (stGroup[i].MidMark>=4)
            {
               fprintf(fp, "Студент:%s, группа: %s, средний балл: %lf\n", stGroup[i].name, stGroup[i].group, stGroup[i].MidMark);
               cout<<"\nOK\n";
            }
        }    
    }
  }
  
  //список не успевающих  
  void ListIsNotAchievers(Student *stGroup, int N)
  {
    fp=fopen("Список не успевающих.txt","w+");
    if (fp==NULL) 
    {
       cout<<"Ошибка создания файла!";
    }
    else
    {
        for (int i=0; i<N; i++)
        {
            if (stGroup[i].MidMark<4)
            {
               fprintf(fp, "Студент:%s, группа: %s, средний балл: %lf\n", stGroup[i].name, stGroup[i].group, stGroup[i].MidMark);
               cout<<"\nOK\n";
            }
        }    
    }
  }
  //cортировка массива структур
  Student SortBy(Student *stGroup, int N, int a) //a - выбор варианта сортировки 
  {
            for (int i=0; i<N; i++)
              {
                  for (int j=i+1; j<N; j++)
                  {
                     //сортировка по номеру группы
                     if( strcmp(stGroup[i].group, stGroup[j].group)>0 && a==1) 
                     {
                          Student buf =  stGroup[i];
                          stGroup[i] = stGroup[j];
                          stGroup[j] =buf;                                
                     }
                     //cортировка по среднему баллу
                     else if (stGroup[i].MidMark<stGroup[j].MidMark && a==2) 
                     {
                          Student buf =  stGroup[i];
                          stGroup[i] = stGroup[j];
                          stGroup[j] =buf;                                
                     }
                     //сортировка по фамилии
                     else if( strcmp(stGroup[i].name, stGroup[j].name)>0 && a==3)
                     {
                          Student buf =  stGroup[i];
                          stGroup[i] = stGroup[j];
                          stGroup[j] =buf;       
                     }
                  }
              }
    return *stGroup;
      
  }         
                 
      
  
  //вывод меню
 void Menu()
 {
     cout<<"\nВыберите действие:\n";
     cout<<"1 - Заполнение списка студентов\n";
     cout<<"2 - Вывод списка студентов\n";
     cout<<"3 - Вывод списка успевающих студентов в файл\n";
     cout<<"4 - Вывод списка неуспевающих студентов в файл\n";
     cout<<"5 - Сортировка по номеру группы\n";
     cout<<"6 - Сортировка по среднему баллу\n";
     cout<<"7 - Сортировка по фамилии\n";
     cout<<"0 - Выход\n";
 }
 
    
int main ( )
{
     SetConsoleCP(1251);  
     SetConsoleOutputCP (1251);
      
     Student InputList(Student *stGroup, int N);
     void ShowList(Student *stGroup, int N);
     void ListOfAchievers(Student *stGroup, int N);
     void ListIsNotAchievers(Student *stGroup, int N);
     Student SortBy(Student *stGroup, int N, int a);
     void Menu();
     int n=0; //кол-во студентов (элементов в массиве)
     while (n<=0)
     {
           cout<<"Введите количество студентов: ";
           cin>>n;
           
     }
    
     Student *stGrp = new Student[n];
     char key; //принимает выбор пользователя
              
     while(true) {
              Menu();
              cin>>key;
              switch(key){
              case '1': *stGrp=InputList(stGrp, n);
                        break;
              case '2': ShowList(stGrp, n);
                        break;
              case '3': ListOfAchievers(stGrp, n);
                        break;
              case '4': ListIsNotAchievers(stGrp, n);
                        break;
              case '5': SortBy(stGrp, n, 1);
                        cout<<"Сортировка по номеру группы выполнена успешно..."; 
                        break;
              case '6': SortBy(stGrp, n, 2);
                        cout<<"Сортировка по среднему баллу выполнена успешно...";  
                        break;
              case '7': SortBy(stGrp, n, 3);
                        cout<<"Сортировка по фамилии выполнена успешно...";  
                        break;
              case '0': return 0;    
              default:    
                        cout<<"\nПовторите выбор:\n";
                        cout<<"Выберите действие:\n";
                        break; 
              
                     }
              }      
               
      
     
              
    
  
  getch();
  delete []stGrp;
  return 0;  
}

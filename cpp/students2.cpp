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
    //���������� ������ ���������
    Student InputList(Student *stGroup, int N)
    {
            for (int i=0; i<N; i++)
            {
            cout<<"\n������� ������� "<<i+1<<"-�� ��������: ";
               cin>>stGroup[i].name;
            cout<<"\n������� ����� ������: ";
               cin>>stGroup[i].group;
            cout<<"\n������� 4 o����� ��������: "<<stGroup[i].name<<endl;
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
    
    //�������� ������ ���������
    void ShowList(Student *stGroup, int N)
    {
         for (int i=0; i<N; i++)
         {
             cout<<"\n���: "<<stGroup[i].name;
             cout<<"\n������: "<<stGroup[i].group;
             cout<<"\n������: ";
             for (int j=0;j<4;j++)
             {
                 cout<<stGroup[i].marks[j]<<" ";
             }
             cout<<"\n������� ����: "<<stGroup[i].MidMark;
         }
    }
    
  //������ ����������  
  void ListOfAchievers(Student *stGroup, int N)
  {
    fp=fopen("������ ����������.txt","w+");
    if (fp==NULL) 
    {
       cout<<"������ �������� �����!";
    }
    else
    {
        for (int i=0; i<N; i++)
        {
            
            if (stGroup[i].MidMark>=4)
            {
               fprintf(fp, "�������:%s, ������: %s, ������� ����: %lf\n", stGroup[i].name, stGroup[i].group, stGroup[i].MidMark);
               cout<<"\nOK\n";
            }
        }    
    }
  }
  
  //������ �� ����������  
  void ListIsNotAchievers(Student *stGroup, int N)
  {
    fp=fopen("������ �� ����������.txt","w+");
    if (fp==NULL) 
    {
       cout<<"������ �������� �����!";
    }
    else
    {
        for (int i=0; i<N; i++)
        {
            if (stGroup[i].MidMark<4)
            {
               fprintf(fp, "�������:%s, ������: %s, ������� ����: %lf\n", stGroup[i].name, stGroup[i].group, stGroup[i].MidMark);
               cout<<"\nOK\n";
            }
        }    
    }
  }
  //c��������� ������� ��������
  Student SortBy(Student *stGroup, int N, int a) //a - ����� �������� ���������� 
  {
            for (int i=0; i<N; i++)
              {
                  for (int j=i+1; j<N; j++)
                  {
                     //���������� �� ������ ������
                     if( strcmp(stGroup[i].group, stGroup[j].group)>0 && a==1) 
                     {
                          Student buf =  stGroup[i];
                          stGroup[i] = stGroup[j];
                          stGroup[j] =buf;                                
                     }
                     //c��������� �� �������� �����
                     else if (stGroup[i].MidMark<stGroup[j].MidMark && a==2) 
                     {
                          Student buf =  stGroup[i];
                          stGroup[i] = stGroup[j];
                          stGroup[j] =buf;                                
                     }
                     //���������� �� �������
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
                 
      
  
  //����� ����
 void Menu()
 {
     cout<<"\n�������� ��������:\n";
     cout<<"1 - ���������� ������ ���������\n";
     cout<<"2 - ����� ������ ���������\n";
     cout<<"3 - ����� ������ ���������� ��������� � ����\n";
     cout<<"4 - ����� ������ ������������ ��������� � ����\n";
     cout<<"5 - ���������� �� ������ ������\n";
     cout<<"6 - ���������� �� �������� �����\n";
     cout<<"7 - ���������� �� �������\n";
     cout<<"0 - �����\n";
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
     int n=0; //���-�� ��������� (��������� � �������)
     while (n<=0)
     {
           cout<<"������� ���������� ���������: ";
           cin>>n;
           
     }
    
     Student *stGrp = new Student[n];
     char key; //��������� ����� ������������
              
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
                        cout<<"���������� �� ������ ������ ��������� �������..."; 
                        break;
              case '6': SortBy(stGrp, n, 2);
                        cout<<"���������� �� �������� ����� ��������� �������...";  
                        break;
              case '7': SortBy(stGrp, n, 3);
                        cout<<"���������� �� ������� ��������� �������...";  
                        break;
              case '0': return 0;    
              default:    
                        cout<<"\n��������� �����:\n";
                        cout<<"�������� ��������:\n";
                        break; 
              
                     }
              }      
               
      
     
              
    
  
  getch();
  delete []stGrp;
  return 0;  
}

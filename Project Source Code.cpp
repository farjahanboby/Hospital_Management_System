#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void menu();
class One{
    public:
        virtual void get()=0;
        virtual void show()=0;
};
class Info:public One
{
  private:
     string name,time;
     int num,age;
  public:
      string na,ti;
      int nu,ag;
      void get()
      {
        system("cls");
        system("color 02");
        cout<<"\n\n\n\n\n\t\t\tEnter the patient name: ";
        cin>>na;
        setName(na);
        cout<<"\n\n\t\t\tEnter age: ";
        cin>>ag;
        setAge(ag);
        cout<<"\n\n\t\t\tEnter the appointment time: ";
        cin>>ti;
        setTime(ti);
        cout<<"\n\n\t\t\tEnter appointment no.: ";
        cin>>nu;
        setAppNo(nu);
      }
      void setName(string n)
      {
          name=n;
      }
      string getName()
      {
          return name;
      }
      void setTime(string t)
      {
          time=t;
      }
      string getTime()
      {
          return time;
      }
      void setAge(int a)
      {
          age=a;
      }
      int getAge()
      {
          return age;
      }
      void setAppNo(int an)
      {
          num=an;
      }
      int getAppNo()
      {
          return num;
      }

      void show()
      {
        cout<<"\n\n\n\t\t\tPatient's name: "<<name;
        cout<<"\n\n\t\t\tPatient's age: "<<age;
        cout<<"\n\n\t\t\tAppointment no.: "<<num;
        cout<<"\n\n\t\t\tAppointment time: "<<time<<endl;
      }
};

class Rana:public Info
{
  private:
      Info al;
  public:
  void get()
  {
    system("cls");
    ofstream out("rana.txt",ios::app);
    al.get();
    out<<"Name: "<<al.getName()<<"\tAge: "<<al.getAge()<<"\t\tApp. no.: "<<al.getAppNo()<<"\t App. time: "<<al.getTime()<<endl;
    out.close();
    cout<<"\n\n\n\t\t\tAppointment has been completed\n\t\t\t";
    system("pause");
    menu();
  }
  void show()
  {
    string line;
    ifstream in("rana.txt");
    system("cls");
    cout<<"\n\n\n\n\t\t\t\t\tDr. Rana's patients:\n";
    cout<<"\t\t--------------------------------------------------------------------\n\n";
    if(in.is_open())
    {
       while(in)
        {
            getline(in,line);
            cout<<"\n\n\t\t"<<line<<endl;
        }
      in.close();
      cout<<"\n\n\n\t\t\t";
      system("pause");
      menu();

    }
    else{
      cout<<"\n\n\t\t\tNo data in this file ";
      cout<<"\n\n\t\t\t";
      system("pause");
      menu();
    }
  }
};
class Waqar:public Info
{
    private:
      Info al;
    public:
      void get()
      {
        system("cls");
        ofstream out("waqar.txt",ios::app);
        al.get();
        out<<"Name: "<<al.getName()<<"\tAge: "<<al.getAge()<<"\t\tApp. no.: "<<al.getAppNo()<<"\t App. time: "<<al.getTime()<<endl;
        out.close();
        cout<<"\n\n\n\t\t\tAppointment has been completed\n\t\t\t";
        system("pause");
        menu();
      }
      void show()
      {
        string line;
        ifstream in("waqar.txt");
        system("cls");
        cout<<"\n\n\n\n\t\t\t\t\tDr. Waqar's patients:\n";
        cout<<"\t\t--------------------------------------------------------------------\n\n";
        if(in.is_open())
        {
           while(in)
            {
                getline(in,line);
                cout<<"\n\n\t\t"<<line<<endl;
            }
          in.close();
          cout<<"\n\n\n\t\t\t";
          system("pause");
          menu();

        }
        else{
          cout<<"\n\n\t\t\tNo data in this file ";
          cout<<"\n\n\t\t\t";
          system("pause");
          menu();
        }
      }
};
class Ahmed:public Info
{
    private:
      Info al;
    public:
      void get()
      {
        system("cls");
        ofstream out("ahmed.txt",ios::app);
        al.get();
        out<<"Name: "<<al.getName()<<"\tAge: "<<al.getAge()<<"\t\tApp. no.: "<<al.getAppNo()<<"\t App. time: "<<al.getTime()<<endl;
        out.close();
        cout<<"\n\n\n\t\t\tAppointment has been completed\n\t\t\t";
        system("pause");
        menu();
      }
      void show()
      {
        string line;
        ifstream in("ahmed.txt");
        system("cls");
        cout<<"\n\n\n\n\t\t\t\t\tDr. Ahmed's patients:\n";
        cout<<"\t\t--------------------------------------------------------------------\n\n";
        if(in.is_open())
        {
           while(in)
            {
                getline(in,line);
                cout<<"\n\n\t\t"<<line<<endl;
            }
          in.close();
          cout<<"\n\n\n\t\t\t";
          system("pause");
          menu();
        }
        else{
          cout<<"\n\n\t\t\tNo data in this file ";
          cout<<"\n\n\t\t\t";
          system("pause");
          menu();
        }
      }
};
class Staff:public One
{
  private:
      string name,age,pos;
      double sal;
  public:
      void get()
      {
        ofstream out("staff.txt",ios::app);
        {
          system("cls");
          system("color B0");
          cout<<"\n\n\n\n\n\n\n\t\t\tEnter Name = ";
          cin>>name;
          cout<<"\n\t\t\tEnter Age = ";
          cin>>age;
          cout<<"\n\t\t\tEnter Salary = ";
          cin>>sal;
          cout<<"\n\t\t\tEnter Working position = ";
          cin>>pos;
        }
        out<<"\nName: "<<name<<"\tAge: "<<age<<"\t\tSalary: "<<sal<<"\t   Working position: "<<pos;
        out.close();
        cout<<"\n\n\n\t\t\tYour Information has been saved \n\t\t\t";
        system("pause");
        menu();
      }
      void show()
      {
        char all[999];
        ifstream in("staff.txt");
        if(!in)
        {
          cout<<"\n\n\n\t\t\tFile open error!!!";
          cout<<"\n\n\t\t\t";
          system("pause");
          menu();
        }
        system("cls");
        system("color 71");
        cout<<"\n\n\n\n\t\t\t\t\tStaff informations:\n";
        cout<<"\t\t--------------------------------------------------------------------";
        while(!(in.eof()))
        {
          in.getline(all,999);
          cout<<"\n\n\t\t"<<all;
        }
        in.close();
        cout<<"\n\n\n\n\t\t\t";
        system("pause");
        menu();
      }
};
class Information
{
  public:
  void drinfo()
  {
    system("cls");
    system("color F4");
    cout<<"\n\t\t******************************************\n";
    cout<<"\n\t\t\t (Three Doctor Avaiable) \n\n\t\t [Information and Timing are given below]\n";
    cout<<"\t\t------------------------------------------\n";
    cout<<"\t\t\tName: Dr. RANA\n\t\t\t(Skin specialist)\n\n";
    cout<<"\t\t\t[Consulting Hours]:\n\n";
    cout<<"\t\tMonday To Friday\t9AM To 5PM\n";
    cout<<"\t\tSaturday     \t\t9AM To 5PM\n";
    cout<<"\t\tSunday        \t\t OFF\n";
    cout<<"\n\t\t------------------------------------------\n";
    cout<<"\t\t\tName: Dr. WAQAR\n\t\t\t(Child specialist)\n\n";
    cout<<"\t\t\t[Consulting Hours]:\n\n";
    cout<<"\t\tMonday To Friday\t2PM To 10PM\n";
    cout<<"\t\tSaturday     \t\t8AM To 1PM\n";
    cout<<"\t\tSunday        \t\t12PM To 9PM\n";
    cout<<"\n\t\t------------------------------------------\n";
    cout<<"\t\t\tName: Dr AHMED\n\t\t\t(DVM)\n\n";
    cout<<"\t\t\t[Consulting Hours]:\n\n";
    cout<<"\t\tMonday To Friday\t8AM To 5PM\n";
    cout<<"\t\tSaturday     \t\t10AM To 1PM\n";
    cout<<"\t\tSunday        \t\t OFF\n";
    cout<<"\n\t\t*******************************************\n";
    cout<<"\n\n\n\t\t\t";
    system("pause");
    menu();
  }
};
void call_dr()
{
  system("cls");
  system("color 06");
  int choice;
  cout<<"\n\n\n\n\n\n\t\t\t1.\tPress 1 for Dr. Rana \n\n\t\t\t2.\tPress 2 for Dr. Waqar  \n\n\t\t\t3.\tPress 3 for Dr. Ahmed\n\n\n\t\t\t";
  cout<<"Please Enter Your Choice : ";
  cin>>choice;
  One *ptr;
  Rana s3;
  Waqar s4;
  Ahmed s5;
  if(choice==1)
  {
    ptr=&s3;
    ptr->get();
  }
  if(choice==2)
  {
    ptr=&s4;
    ptr->get();
  }
  if(choice==3)
  {
    ptr=&s5;
    ptr->get();
  }
  else{
    cout<<"\n\n\n\t\t\tSorry invalid choice.";
    cout<<"\n\t\t\t";
      system("pause");
    menu();
  }
}

void pinfoshow()
{
	system("cls");
	system("color 0D");
	int choice;
	cout<<"\n\n\n\n\n\n\t\t\t1.\tPress 1 for Dr. Rana's patient \n\n\t\t\t2.\tPress 2 for Dr. Waqar's patient  \n\n\t\t\t3.\tPress 3 for Dr. Ahmed's patient\n\n\n\t\t\t";
	cout<<"Please Enter Your Choice : ";
	cin>>choice;
	One *ptr;
	Rana s3;
	Waqar s4;
	Ahmed s5;
	if(choice==1)
	{
		ptr=&s3;
		ptr->show();
	}
	else if(choice==2)
	{
		ptr=&s4;
		ptr->show();
	}
	else if(choice==3)
	{
		ptr=&s5;
		ptr->show();
	}
	else
	{
		cout<<"\n\n\n\t\t\tSorry invalid choice.";
        cout<<"\n\t\t\t";
        system("pause");
		menu();
	}

}
void menu()
{
	    system("cls");

        cout<<"\n\n\n\n\n";


        cout<<"\t\t\t    |  **********  MAIN MENU   **********  |  \n";
        cout<<"\t\t\t    |      Hospital Management system      |  \n";
        cout<<"\t\t\t    |======================================|  \n";

        cout<<"\n\t--------------------------------------------------------------------------------\n";

     	cout<<"\n\n\t\t1.\tPress 1 For Available Doctor Information\n\n";
		cout<<"\t\t2.\tPress 2 for Doctor Appointment\n\n";
		cout<<"\t\t3.\tPress 3 for Saving Staff Information\n\n";
		cout<<"\t\t4.\tPress 4 for Checking Patient Appointment List\n\n ";
		cout<<"\t\t5.\tPress 5 for Checking Staff Information List\n\n";

		cout<<"\n\t================================================================================\n";
		cout<<"\n\n\t\tPlease Enter Your Choice : ";
		Information a1;
		One *ptr;
		Staff a2;
		int a;
		cin>>a;
		if(a==1)
		{
			a1.drinfo();
		}
		else if(a==2)
		{
	    	call_dr();
		}
		else if(a==3)
		{
			ptr=&a2;
			ptr->get();

		}
		else if(a==4)
		{
			pinfoshow();
		}
		else if(a==5)
		{
			ptr=&a2;
			ptr->show();
		}
		else
		{
			system("cls");
			cout<<"\n\n\n\n\n\t\t\tInvalid choice!!!\n\n\t\t\tPlease enter correct option ";
            cout<<"\n\n\n\n\t\t\t";
            system("pause");
            menu();
		}
}

int main()
{
    menu();
    return 0;
}


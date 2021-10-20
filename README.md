# INTRODUCTION TO OOPS




# WHY OOPS ?

- There is datatype for every kind of user input or storage in c++ .
- But now we will see the brief look in the user defined datatype which is termed as class .
- class is an user defined datatype .
- It is the just acts like an blueprint which contains some attributes and function .

## SYNTAX OF CLASS

```cpp
class name_of_class
{
	string name;
	int age;
	int roll_no;
	int total_marks;

};
```

- here name , age , roll_no and total marks are working as an data members .
- Now when we add the students in the class and these students will be termed as an object in the class .
- The basic example of this is :

```cpp
student harsh;
harsh.name = "harsh";
harsh.age = 18;
harsh.roll_no = 023;
harsh.total_marks = 500;
```

- Now here this student harsh is an object of the class student .
- Now we will be accessing the class through object by using dot operator (.) .

## THE EXAMPLE OF THE CODE IS GIVEN BELOW

- Given below is an code of the sample class declaration by the user

```cpp
#include <iostream>
using namespace std;

//Here public is used in access these attributes publicly 
//Now all the attributes and function in the class written above public will be considered as private .

class student{
    public:
    string name ;
    int age;
    int roll_number;
    int total_marks;
};

int main()
{
    int data_entered;
    student harsh;
    harsh.name = "harsh";
    harsh.age = 18;
    harsh.roll_number = 23;
    harsh.total_marks = 500;
    
    cout<<"Press 1 to see the data entered by the user"<<endl;
    cin>>data_entered;
    if (data_entered == 1)
    {
        cout<<"Name of the student is :  "<<harsh.name<<endl;
        cout<<"Age of the student is :  "<<harsh.age<<endl;
        cout<<"Roll no of the student is :  "<<harsh.roll_number<<endl;
        cout<<"Total marks of the student is :  "<<harsh.total_marks<<endl;
    }
    else
    {
        exit(0);
    }
    
        return 0;
}
```

![Untitled](INTRODUCTION%20TO%20OOPS%2098640ef6c185490c88e6de8541124fb9/Untitled.png)

## CODE FOR DECLARATION OF OBJECT ARRY IN CLASS

- Array is very useful in order to take multiple object input from the users .
- the code of the object array declaration is given below :

```cpp
#include <iostream>
using namespace std;

//Here public is used in access these attributes publicly 
//Now all the attributes and function in the class written above public will be considered as private .

class student{
    public:
    string name ;
    int age;
    int roll_number;
    int total_marks;
};

int main()
{
    //Now here we will declare the object array like this 
    student arr[4]; //In the brackets place the last index till you want array .
    //Now we will enter the value in the array by using simple loops 
    for (int i = 1; i <= 3; i++)
    {
        cout<<"Please enter the name of "<<i<<" student : ";
        cin>>arr[i].name;
        cout<<"Please enter the age of "<<i<<" student : ";
        cin>>arr[i].age;
        cout<<"Please enter the roll number of "<<i<<" student : ";
        cin>>arr[i].roll_number;
        cout<<"Please enter the total marks of "<<i<<" student : ";
        cin>>arr[i].total_marks;

        cout<<endl;

    }
    for (int i = 1; i <= 3; i++)
    {
        cout<<"enterd  name of "<<i<<" student : "<<arr[i].name<<endl;
        cout<<"enterd  age of "<<i<<" student : "<<arr[i].age<<endl;
        cout<<"enterd  roll_number of "<<i<<" student : "<<arr[i].roll_number<<endl;
        cout<<"enterd  total_marks of "<<i<<" student : "<<arr[i].total_marks<<endl;

    }
    
        return 0;
}
```

- Above code is for object arraay declaration .

## CODE FOR DECLARING FUNCTION IN CLASS

- In  the below code we have declared the function in the class .
- This function is declared public and can be called anywhere in the any excecutable function .

```cpp
#include <iostream>
using namespace std;

//Here public is used in access these attributes publicly 
//Now all the attributes and function in the class written above public will be considered as private .

int i;

class student{
    public:
    string name ;
    int age;
    int roll_number;
    int total_marks;

   //This is the printinfo() function which is used to print the details .
   // The genral syntax we will use to call it is arr[index_number_of_student].printinfo()
   //This is the public function which you can call anywhere and see the details of the objects .

    void printinfo()
    {
        cout<<"Name of the "<<i<<" student is : "<<name<<endl;
        cout<<"age of the "<<i<<" student is : "<<age<<endl;
        cout<<"roll_number of the "<<i<<" student is : "<<roll_number<<endl;
        cout<<"total_marks of the "<<i<<" student is : "<<total_marks<<endl;

        cout<<endl;
    }
};

int main()
{
    //Now here we will declare the object array like this 
    student arr[4]; //In the brackets place the last index till you want array .
    //Now we will enter the value in the array by using simple loops 
    for (i = 1; i <= 3; i++)
    {
        cout<<"Please enter the name of "<<i<<" student : ";
        cin>>arr[i].name;
        cout<<"Please enter the age of "<<i<<" student : ";
        cin>>arr[i].age;
        cout<<"Please enter the roll number of "<<i<<" student : ";
        cin>>arr[i].roll_number;
        cout<<"Please enter the total marks of "<<i<<" student : ";
        cin>>arr[i].total_marks;

        cout<<endl;

    }
    for (i = 1; i <= 3; i++)
    {
        // This is the call of the class declared function in order to print the details of objects .
        arr[i].printinfo();

    }
    
        return 0;
}
```

## CODE FOR ACCESSING THE PRIVATE ATTRIBUTE IN CLASS

- We have accessed the private attribute of the class .
- We have written an code in which name string and age in integer type is written in private in class .
- Now we have created an functions to access it .
- Similarly you can access the different private attributes together .
- The code of the following is given below 🙃

```cpp
#include <iostream>
using namespace std;

//Here public is used in access these attributes publicly 
//Now all the attributes and function in the class written above public will be considered as private .

int i;

class student{
    //Here name is an private function of this class .
    string name ;
    int age;
    public:
    int roll_number;
    int total_marks;

   //This is the printinfo() function which is used to print the details .
   // The genral syntax we will use to call it is arr[index_number_of_student].printinfo()
   //This is the public function which you can call anywhere and see the details of the objects .

   void settingName(string s)
   {
       name = s;
   }

   void studentAge(int a)
   {
       age = a;
   }

   // This function used to call the private string function
   // This function act as a set function

   //Similarly we have accessed the private age attribute .

    void printinfo()
    {
        cout<<"Name of the "<<i<<" student is : "<<name<<endl;
        cout<<"age of the "<<i<<" student is : "<<age<<endl;
        cout<<"roll_number of the "<<i<<" student is : "<<roll_number<<endl;
        cout<<"total_marks of the "<<i<<" student is : "<<total_marks<<endl;

        cout<<endl;
    }
};

int main()
{
    //Now here we will declare the object array like this 
    student arr[4]; //In the brackets place the last index till you want array .
    //Now we will enter the value in the array by using simple loops 
    for (i = 1; i <= 3; i++)
    {
        string s;
        int a;
        cout<<"Please enter the name of "<<i<<" student : ";
        //This will behave same as the normal string function .

        cin>>s;
        arr[i].settingName(s);
        cout<<"Please enter the age of "<<i<<" student : ";
        cin>>a;
        arr[i].studentAge(a);

        //The above age function will behave as normal age function . 

        cout<<"Please enter the roll number of "<<i<<" student : ";
        cin>>arr[i].roll_number;
        cout<<"Please enter the total marks of "<<i<<" student : ";
        cin>>arr[i].total_marks;

        cout<<endl;

    }
    for (i = 1; i <= 3; i++)
    {
        // This is the call of the class declared function in order to print the details of objects .
        arr[i].printinfo();

    }
    
        return 0;
}
```

# CONSTRUCTORS

- They are special type of member function used to initialize objects in class .
- Imagine if you want to enter data directly in the class .
- The below code given is of constructors :
    - Given below is the example of the parameterised constructor .

```cpp
#include <iostream>
using namespace std;

class student{
    //Here name is an private function of this class .
    public:
    string name ;
    int age;
    int roll_number;
    int total_marks;

   //This is the printinfo() function which is used to print the details .

    void printinfo()
    {
        cout<<"Name of the "<<i<<" student is : "<<name<<endl;
        cout<<"age of the "<<i<<" student is : "<<age<<endl;
        cout<<"roll_number of the "<<i<<" student is : "<<roll_number<<endl;
        cout<<"total_marks of the "<<i<<" student is : "<<total_marks<<endl;

        cout<<endl;
    }

    student ( string a , int b , int r , int marks)
    {
        name = a;
        age = b;
        roll_number = r;
        total_marks = marks;
    }

    //This is an parameterised constructor .
    //This is used to enter the data in the object of the class .
};

int main()
{
    student a("harsh",23,65,500);
    a.printinfo();
    
        return 0;
}
```

## DEFAULT CONSTRUCTOR

- The default constructor is called when we add no parameters .
- The code of the following is given below :
- Here a is calling the default constructor .
- This default constructor is declared above .

```cpp
**#include <iostream>
using namespace std;

int i;

class student{
    //Here name is an private function of this class .
    public:
    string name ;
    int age;
    int roll_number;
    int total_marks;

   //This is the printinfo() function which is used to print the details .

    void printinfo()
    {
        cout<<"Name of the "<<i<<" student is : "<<name<<endl;
        cout<<"age of the "<<i<<" student is : "<<age<<endl;
        cout<<"roll_number of the "<<i<<" student is : "<<roll_number<<endl;
        cout<<"total_marks of the "<<i<<" student is : "<<total_marks<<endl;

        cout<<endl;
    }

    student()
    {
        cout<<"This is an example of the default constructors"<<endl;
    }

    //This is an default constructor .
    //This is used to enter the data in the object of the class .
};

int main()
{
    student a;

    // This will call the default constructor
    
        return 0;
}**
```

## COPY CONSTRUCTORS

- These constructors are used in order to copy the data of one object to another .
- In the below code :
    - We have assign the value of object a into object c .
    - We have created an copy constructor to copy the object values .
    - We have created an parameterised constructor in order to add the objects value in class .
    - Then we have printinfo() function in order to test the current values of a and c .

```cpp
#include <iostream>
using namespace std;

int i;

class student{
    //Here name is an private function of this class .
    public:
    string name ;
    int age;
    int roll_number;
    int total_marks;

   //This is the printinfo() function which is used to print the details .

    void printinfo()
    {
        cout<<"Name of the "<<i<<" student is : "<<name<<endl;
        cout<<"age of the "<<i<<" student is : "<<age<<endl;
        cout<<"roll_number of the "<<i<<" student is : "<<roll_number<<endl;
        cout<<"total_marks of the "<<i<<" student is : "<<total_marks<<endl;

        cout<<endl;
    }

    student (student &a)
    {
        name = a.name;
        age = a.age;
        roll_number = a.roll_number;
        total_marks = a.total_marks;
    }
    // the above created constructor is termed as an copy constructor

    // I am creating an parameterized constructor to take the parameters
    student(string a , int ages , int roll_numbers , int total_markes)
    {
        name = a;
        age = ages;
        roll_number = roll_numbers;
        total_marks = total_markes;
    }
};

int main()
{
    student a("harsh",18,23,500);
    a.printinfo();
    //this will print the values of the object a .
    student c = a;
    //The above line will copy all the object values of a into c .
    c.printinfo();
    //This will print the values of object c .

    // This will call the default constructor .
    
        return 0;
}
```

# DISTRUCTORS

- It is called when the object goes out of the scope .
- It is destroyed by a call to delete .

```cpp
#include <iostream>
using namespace std;

int i;

class student{
    //Here name is an private function of this class .
    public:
    string name ;
    int age;
    int roll_number;
    int total_marks;

   //This is the printinfo() function which is used to print the details .

    void printinfo()
    {
        cout<<"Name of the "<<i<<" student is : "<<name<<endl;
        cout<<"age of the "<<i<<" student is : "<<age<<endl;
        cout<<"roll_number of the "<<i<<" student is : "<<roll_number<<endl;
        cout<<"total_marks of the "<<i<<" student is : "<<total_marks<<endl;

        cout<<endl;
    }

    student ( string a , int b , int r , int marks)
    {
        name = a;
        age = b;
        roll_number = r;
        total_marks = marks;
    }

    // ~ this is used to declare an student
    ~student() {
        cout<<"nameste India"<<endl;
    }

    //This is an parameterised constructor .
    //This is used to enter the data in the object of the class .
};

int main()
{
    student a("harsh",23,65,500);
    a.printinfo();
    
        return 0;
}
```

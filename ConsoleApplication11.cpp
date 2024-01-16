#include<iostream>
using namespace std;


//class MyString
//{
//    char* str;
//    int size;
//    static int count;
//
//public:
//    MyString()
//    {
//        size = 80;
//        str = new char[size + 1];
//        count++;
//    }
//
//    MyString(const MyString& copy)
//    {
//        size = copy.size;
//        str = copy.str;
//        count++;
//    }
//
//    MyString(int Size)
//    {
//        size = Size;
//        str = new char[size + 1];
//        count++;
//    }
//
//    MyString(const char* arr)
//    {
//        size = strlen(arr);
//        str = new char[size + 1];
//        strcpy_s(str, size + 1, arr);
//        count++;
//    }
//
//    void Input()
//    {
//        cout << "Input string:";
//        cin.getline(str, size + 1);
//    }
//
//    void Output()
//    {
//        if (str == nullptr)
//        {
//            cout << "Empty object!\n";
//            return;
//        }
//        cout << "String: " << str << "\n\n\n";
//    }
//
//    static int GetCount()
//    {
//        return count;
//    }
//
//    /* ~MyString()
//     {
//         delete[] str;
//         count--;
//     }*/
//
//    MyString operator++() 
//    {
//        int sz = strlen(str);
//        char* new_str = new char[sz + 2];
//        
//        strcpy_s(new_str, sz + 2, str);
//        
//        new_str[sz] = 'x';
//        new_str[sz + 1] = '\0';
//        
//        delete[] str;
//        str = new_str;
//        
//        return *this;
//    }
//    MyString operator++(int)
//    {
//        int sz = strlen(str);
//        char* new_str = new char[sz + 2];
//
//        strcpy_s(new_str, sz + 2, str);
//
//        new_str[sz] = 'x';
//        new_str[sz + 1] = '\0';
//
//        delete[] str;
//        str = new_str;
//
//        return *this;
//    }
//
//    MyString operator--()
//    {
//        str[size - 1] = '\0';
//        
//        return *this;
//    }
//    MyString operator--(int)
//    {
//        str[size - 1] = '\0';
//
//        return *this;
//    }
//
//    MyString operator+(int value) 
//    {
//        int sz = strlen(str);
//        char* new_str = new char[sz + 1 + value];
//
//        strcpy_s(new_str, sz + 1 + value, str);
//        
//        for (int i = 0; i < value; i++)
//        {
//            new_str[sz + i] = 'x';
//        }
//        
//        new_str[sz + value] = '\0';
//        
//        return MyString(new_str);
//    }
//
//    MyString operator-(int value) 
//    {
//        int sz = strlen(str);
//        str[sz - value] = '\0';
//        
//        return *this;
//    }
//    MyString& operator=(const MyString& obj)
//    {
//        if (!(this == &obj))
//        {
//            if (str != nullptr)
//            {
//                delete[] str;
//            }
//            if (obj.str == nullptr)
//            {
//                str = nullptr;
//                size = obj.size;
//                return *this;
//            }
//            str = new char[strlen(obj.str) + 1];
//            strcpy_s(str, strlen(obj.str) + 1, obj.str);
//            size = obj.size;
//        }
//        return *this;
//    }
//};
//
//int MyString::count = 0;
//
//int main()
//{
//    MyString obj1;
//    MyString obj2(20);
//    MyString obj3("Hello");
//    obj3.Output();
//    
//   
//  /* Задание 1
//   obj1 = obj3;
//   obj1.Output();*/
//
//
//  /* Задание 2
//   --obj3;
//   obj3.Output();
//
//   obj3--;
//   obj3.Output();*/
//}







//Задание 3
//class Contact
//{
//    char* FullName;
//    char* sex;
//    int HomePhone, WorkPhone, MobilePhone;
//    int age;
//
//
//public:
//    Contact() : Contact(" ", " ", 0, 0, 0, 0) {}
//    Contact(const char* Fl_Name, const char* Sex) : Contact(Fl_Name, Sex, 0, 0, 0, 0) {}
//    Contact(const char* Fl_Name, const char* Sex, int Age) : Contact(Fl_Name, Sex, Age, 0, 0, 0) {}
//    Contact(const char* Fl_Name, const char* Sex, int Age, int HmPhone) : Contact(Fl_Name, Sex, Age, HmPhone, 0, 0) {}
//    Contact(const char* Fl_Name, const char* Sex, int Age, int HmPhone, int WrPhone) : Contact(Fl_Name, Sex, Age, HmPhone, WrPhone, 0) {}
//
//
//    Contact(const Contact& copy)
//    {
//        FullName = new char[strlen(copy.FullName) + 1];
//        sex = new char[strlen(copy.sex) + 1];
//        strcpy_s(FullName, strlen(copy.FullName) + 1, copy.FullName);
//        strcpy_s(sex, strlen(copy.sex) + 1, copy.sex);
//
//        age = copy.age;
//        HomePhone = copy.HomePhone;
//        WorkPhone = copy.WorkPhone;
//        MobilePhone = copy.MobilePhone;
//    }
//
//    Contact(const char* Fl_Name, const char* Sex, int Age, int HmPhone, int WrPhone, int MbPhone)
//    {
//        FullName = new char[strlen(Fl_Name) + 1];
//        sex = new char[strlen(Sex) + 1];
//        strcpy_s(FullName, strlen(Fl_Name) + 1, Fl_Name);
//        strcpy_s(sex, strlen(Sex) + 1, Sex);
//
//        age = Age;
//        HomePhone = HmPhone;
//        WorkPhone = WrPhone;
//        MobilePhone = MbPhone;
//    }
//
//
//    void Set_FullName(const char* Fl_Name)
//    {
//        if (FullName != nullptr)
//            delete[] FullName;
//        FullName = new char[strlen(Fl_Name) + 1];
//        strcpy_s(FullName, strlen(Fl_Name) + 1, Fl_Name);
//    }
//    void Set_AdditInfo(const char* Sex, int Age)
//    {
//        if (sex != nullptr)
//            delete[] sex;
//        sex = new char[strlen(Sex) + 1];
//        strcpy_s(sex, strlen(Sex) + 1, Sex);
//        age = Age;
//    }
//    void Set_PhoneNumber(int HmPhone, int WrPhone, int MbPhone)
//    {
//        HomePhone = HmPhone;
//        WorkPhone = WrPhone;
//        MobilePhone = MbPhone;
//    }
//
//
//    void Output()
//    {
//        if (FullName == nullptr)
//        {
//            cout << "Empty object!\n";
//            return;
//        }
//        cout << "Full Name: " << FullName << "\n";
//        cout << "Sex: " << sex << "\n";
//        cout << "Age: " << age << "\n\n";
//        cout << "Home Phone: " << HomePhone << "\n";
//        cout << "Work Phone: " << WorkPhone << "\n";
//        cout << "Mobile Phone: " << MobilePhone << "\n\n\n";
//    }
//
//
//    Contact& operator=(const Contact& obj)
//    {
//        if (!(this == &obj))
//        {
//            if (FullName != nullptr)
//            {
//                delete[] FullName;
//                delete[] sex;
//            }
//            if (obj.FullName == nullptr)
//            {
//                FullName = nullptr;
//                sex = nullptr;
//
//                age = obj.age;
//                HomePhone = obj.HomePhone;
//                WorkPhone = obj.WorkPhone;
//                MobilePhone = obj.MobilePhone;
//
//                return *this;
//            }
//            FullName = new char[strlen(obj.FullName) + 1];
//            strcpy_s(FullName, strlen(obj.FullName) + 1, obj.FullName);
//
//            sex = new char[strlen(obj.sex) + 1];
//            strcpy_s(sex, strlen(obj.sex) + 1, obj.sex);
//        }
//        return *this;
//    }
//    //    //~Contact()
//    //    //{
//    //    //    cout << "Destruct\n";
//    //    //    delete[] FullName;
//    //    //    delete[] sex;
//    //    //}*/ Если деструктор не будет в комментарии,будет ошибка.
//    };
//    
//
//    void iteration(Contact* arr, int size)
//    {
//        for (int i = 0; i < size; i++)
//        {
//            arr[i].Output();
//        }
//        cout << "\n\n\n\n";
//    }
//
//    void AddContact(Contact*& arr, int size, Contact& NewArr)
//    {
//        Contact* temp = new Contact[size + 1];
//
//        for (int i = 0; i < size; i++)
//        {
//            temp[i] = arr[i];
//        }
//
//        temp[size] = NewArr;
//        delete[] arr;
//        arr = temp;
//
//        iteration(arr, size + 1);
//    }
//
//    void RemoveContact(Contact*& arr, int size, int index)
//    {
//        size--;
//        Contact* temp = new Contact[size];
//
//        for (int i = 0; i < size; i++)
//        {
//            if (i != index)
//            {
//                temp[i] = arr[i];
//                continue;
//            }
//        }
//        delete[] arr;
//        arr = temp;
//        iteration(arr, size);
//    }
//
//    int main()
//    {
//        int size = 3;
//        Contact* mas = new Contact[size]
//        {
//            {"Konstantin Ghenadii Dmitrievich ", "Male", 34, 350055019, 907100905, 660690345},
//            {"Arsen Sevastianov Ruslanovich", "Male", 16, 340069590, 340010090, 690325859},
//            {"Anastasia Maksimenko Alekseevna", "Female", 56, 551010452, 677641356, 760400561}
//        };
//        Contact* newContact;
//
//        iteration(mas, size);
//
//        newContact = mas;
//        iteration(newContact, size);
//    }
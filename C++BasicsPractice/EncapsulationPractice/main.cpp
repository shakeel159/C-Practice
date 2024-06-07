#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
    int studnetID;
    string studentName;
    string collegeName;
    string address;

    public:
    int getID(){
        return studnetID;
    }
    string getName(){
        return studentName;
    }
    string getCollegeName(){
        return collegeName;
    }
    string getCollegeAddress(){
        return address;
    }

    void setID(int id){
        studnetID = id;
    }
    void setName(string name){
        studentName = name;
    }
    void setCollege(string name){
        collegeName = name;
    }
    void setCollegeAddress(string _address){
        address = _address;
    }

};

class testStudent{
public:
    static void main(){
        Student st;

        st.setID(393771);
        st.setName("Jazib Shakeel");
        st.setCollege("Columbia Collage Chicago");
        st.setCollegeAddress("Chicago, IL");

        cout << st.getID() << endl;
        cout << st.getName() << endl;
        cout << st.getCollegeName() << endl;
        cout << st.getCollegeAddress() << endl;
    }
};

int main(){
    testStudent testClass;

    testClass.main();
    return 0;
}
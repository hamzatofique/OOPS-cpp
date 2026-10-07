#include<iostream>
#include<cstring>
using namespace std;
class CharString{
 private:
    char* cstr;
    int size;
 public:   
CharString():cstr(nullptr),size(0){ }
CharString(const char* src){
    cout<<"Parametrized ctor "<<endl;
    if(src == nullptr){
        cstr = nullptr;
        size = 0;
        return;
    }
    this->size=strlen(src);
    cstr=new char[strlen(src)+1];
    strcpy(cstr,src);
}
CharString(const CharString &src):cstr(nullptr),size(0){
    cout<<"Copy of constructor "<<endl;
    if(src.cstr != nullptr){
        this->size = src.size;
        this->cstr = new char[this->size + 1];
        strcpy(this->cstr, src.cstr);
    }
}
~CharString(){
    //runs at last
    delete[] cstr;
}
int size() const{
    cout<<"The size of the String is : ";
 return size;}

void clear(){
    delete[] cstr;
    cstr=nullptr;
    size=0;
}
void print() const{
    cout<<"The Entered string is : ";
    if(cstr!=nullptr){
    for(int i=0;i<size;i++){
        cout<<cstr[i];

    }
}
else
cout<<"Null string Pointer";
    cout<<endl;
}
void CopyFrom(const char* src){
    delete[] cstr;
    cstr = nullptr;//avoids dangling pointer
    size = 0;
    if(src == nullptr){
        return;
    }
    size = strlen(src);
    cstr = new char[size + 1];
    strcpy(cstr, src);
}
void CopyFrom(const CharString &src){//passing obj
    if(this==&src){
        return;
    }
    delete[] cstr;
    cstr = nullptr;
    size = 0;
    if(src.cstr == nullptr){
        return;
    }
    size = src.size;
    cstr = new char[size + 1];
    strcpy(cstr, src.cstr);
}
void concat( const char* str ){//passing string
    if(str==nullptr){
        return;
    }
    int strSize=strlen(str);
    int newSize=size+strSize;
    char* temp=new char[newSize+1];
    //copying old elemnts first
    for(int i=0;i<size;i++){
        temp[i]=cstr[i];
    }
    //copying new conct elemnts at end
     for(int i=0;i<strSize;i++){
        temp[size+i]=str[i];
    }
    temp[newSize]='\0';//null at end
    delete[] cstr;
    cstr=temp;
    size=newSize;

}
void concat(const CharString &str){
    if(this==&str) return;
    int strSize=str.size;
    int newSize=this->size+strSize;
    char* temp=new char[newSize+1];
    //copying old elemnts first
    for(int i=0;i<this->size;i++){
        temp[i]=cstr[i];
    }
    //copying new conct elemnts at end
     for(int i=0;i<strSize;i++){
        temp[size+i]=str.cstr[i];
    }
    temp[newSize]='\0';//null at end
    delete[] cstr;
    cstr=temp;
    size=newSize;

}
bool isEqualTo(const char* str)const{
    if(str==nullptr) return 0;
    if(size==strlen(str)){
    for(int i=0;i<size;i++){
        if(cstr[i]!=str[i])
        return false;
    }
}
else
    return false;

    return true;

}
bool isEqualTo(const CharString &str)const{
    if(size==str.size){
    for(int i=0;i<size;i++){
        if(cstr[i]!=str.cstr[i])
        return false;
    }
}
else
    return false;
 

    return true;
}
bool checkPalindrome() const {
    int i = 0;
    int j = size - 1;

    while(i < j) {
        if(cstr[i] != cstr[j]) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}
 
CharString Reverse()const{
    char* temp=new char[size+1];
    for(int i=0;i<size;i++){
       temp[i]=cstr[size-i-1];
    }
    temp[size]='\0';//null char at the end
    CharString result(temp);
    delete[] temp;
    return result;
}
CharString Substring(int start,int n) const{
    if(start>=size || start<0){
        CharString result;
        return result;
    }
    int rem=size-start;
    if(rem<n) n=rem;
    char* temp=new char[n+1];
    for(int i=0;i<n;i++){
        temp[i]=cstr[start+i];
        
    }    temp[n]='\0';
    CharString result;

    result.CopyFrom(temp);
    delete[] temp;
    return result;
}
int countOccurenceOf(const char* substr){
    int count=0;
    int stringsize=strlen(substr);
    if(stringsize>size || stringsize==0){
        return 0;
    }
    int i=0;
while(i<=size-stringsize){
    bool occur=true;
        for(int j=0;j<stringsize;j++){
        if(substr[j]!=cstr[i+j]){
         occur=false;
         break; 
        }
        }
        if(occur){
            i+=stringsize;
            count++;
        }
        else{
        i++;
    }
}
return count;
}


};
int main(){

    // Default constructor
    CharString c1;
    cout << "c1: ";
    c1.print();


    // Parameterized constructor
    CharString c2("hamza toufeeque");
    cout << "c2: ";
    c2.print();


    // Copy constructor
    CharString c3(c2);
    cout << "c3 (copy of c2): ";
    c3.print();


    // length()
    cout << "Length of c2: ";
    cout << c2.size() << endl;


    // clear()
    CharString c4("Hello World");
    cout << "\nBefore clear: ";
    c4.print();

    c4.clear();

    cout << "After clear: ";
    c4.print();


    // CopyFrom(const char*)
    CharString c5;
    c5.CopyFrom("Pakistan");
    cout << "\nc5 after CopyFrom(char*): ";
    c5.print();


    // CopyFrom(const CharString&)
    CharString c6;
    c6.CopyFrom(c2);
    cout << "c6 after CopyFrom(CharString): ";
    c6.print();


    // concat(const char*)
    CharString c7("Hello ");
    c7.concat("World");
    cout << "\nc7 after concat(char*): ";
    c7.print();


    // concat(const CharString&)
    CharString c8("Hello ");
    CharString c9("Pakistan");

    c8.concat(c9);

    cout << "c8 after concat(CharString): ";
    c8.print();


    // isEqualTo(const char*)
    cout << "\nChecking c2 == \"hamza toufeeque\": ";

    if(c2.isEqualTo("hamza toufeeque"))
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;


    // isEqualTo(const CharString&)
    CharString c10("hamza toufeeque");

    cout << "Checking c2 == c10: ";

    if(c2.isEqualTo(c10))
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;


    // checkPalindrome()
    CharString c11("madam");

    cout << "\nPalindrome test for ";
    c11.print();

    if(c11.checkPalindrome())
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;


    // Reverse()
    CharString c12("Pakistan");

    CharString reversed = c12.Reverse();

    cout << "\nOriginal string: ";
    c12.print();

    cout << "Reversed string: ";
    reversed.print();


    // Substring()
    CharString c13("Hello World");

    CharString substring;
    substring.CopyFrom(c13.Substring(4, 6));

    cout << "\nOriginal string: ";
    c13.print();

    cout << "Substring: ";
    substring.print();


    // countOccurenceOf()
    CharString c14("Hasasanas");

    cout << "\nString for occurrence test: ";
    c14.print();

    cout << "Occurrences of \"as\": "
         << c14.countOccurenceOf("as") << endl;

    cout << "Occurrences of \"asa\": "
         << c14.countOccurenceOf("asa") << endl;


    return 0;

}
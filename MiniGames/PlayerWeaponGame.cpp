#include<iostream>
#include<cstring>
using namespace std;
class Weapon{
    private:
    static int weaponCount;
    const int weaponID;
    char* wname;
    int damage;
    static char* dup(const char* s) { //static member function
        if (s == nullptr) return nullptr;
        char* p = new char[strlen(s) + 1];//new pointer
        strcpy(p, s);//linearly store one by one 
        return p;
    }
    public:
    Weapon(const char* n=nullptr,int d=0) : weaponID(++weaponCount),damage(d),wname(dup(n)){
     cout<<"The Weapon has been chosen : "<<weaponID<<endl;
    }
    Weapon(Weapon &w):weaponID(++weaponCount),damage(w.damage),wname(dup(w.wname)){

      cout<<"Weapon COPY created , ID :"<<weaponID<<endl;

    }
    ~Weapon(){
        delete[] wname;
        cout<<"Weapon Destroyed !!"<<endl;;
    }
    //getters
      int getID() const{
     return weaponID;
    }
    int getDamage() const{
        return damage;
    }
    const char* getName() const{ //const pointer only to print
        return wname;//give address of first char in wname
    }
    void setDamage(int d){
        if(d<0 || d>100){
            cout<<"Invalid Damage , Please Enter a valid Damage "<<endl;
        }
        else 
        damage=d;
    }
    static int getWeaponcount(){ //static member function to return static data member
        return weaponCount;

    }
};
int Weapon :: weaponCount=0; //static data member
class Player{
    private:
    static int playerCount;
    const int playerID;
    char* nick;//nickname
    int health;
    Weapon weapon;//composition
     static char* dup(const char* s) { //static member function
        if (s == nullptr) return nullptr;
        char* p = new char[strlen(s) + 1];//new pointer
        strcpy(p, s);//linearly store one by one 
        return p;
    }
    public:
    Player(const char* n,const char* wName,int wDamage): playerID(++playerCount),nick(dup(n)),health(100),weapon(wName,wDamage)//calling composition
    {
     cout<<"Player Created : "<<playerID<<endl;
   
    }
    Player(Player &p): nick(dup(p.nick)),playerID(++playerCount),health(p.health),weapon(p.weapon){
        cout<<"Player COPY created with ID : "<<playerID<<endl;

    }
    ~Player(){
        delete[] nick;
        cout<<"Player destructed with ID : "<<playerID<<endl;
    }
     int getID() const { return playerID; }
    int getHealth() const { return health; }
    const char* getNick() const { return nick; }

    const Weapon& getWeapon() const { return weapon; }  // by value: for const players
    Weapon& getWeapon() { return weapon; }              // by reference : for editing
    void setNickAtIndex(int index,char c){
        nick[index]=c;
    }
    void takeDamage(int d){
        health-=d;
        if(health<0)
        health=0;
    }
    static int getPlayerCount(){
        return playerCount;
    }
        void show() const {
        cout << "Player " << playerID << ": " << nick
             << " | Health " << health
             << " | Weapon " << weapon.getID() << ": " << weapon.getName()
             << " (damage " << weapon.getDamage() << ")" << endl;
    }


};
int Player :: playerCount=0;
//use static function to print static variable
//use const function to print const variable
//getters are const
//setter depends on the type you set
//const value cannot be set

int main(){
    Player p1("Zed","sword",40);
    Player p2(p1);
    p2.setNickAtIndex(0,'N');
    p2.getWeapon().setDamage(75);
     p2.getWeapon().setDamage(150);
     p2.takeDamage(30);
     p2.show();
     p1.show();
      cout << "\n--- Step 4: const player ---\n";
    const Player p3("Hamza", "Bow", 55);
    p3.show();                       // OK: show() is const

    // p3.takeDamage(10);            // ERROR: not const

    cout << "\n--- Step 5: counts ---\n";
    cout << "Total players: " << Player::getPlayerCount() << endl;
    cout << "Total weapons: " << Weapon::getWeaponcount() << endl;

    cout << "\n--- End of main ---\n";
    return 0;



}
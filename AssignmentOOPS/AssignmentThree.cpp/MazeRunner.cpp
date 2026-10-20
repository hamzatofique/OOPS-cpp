#include<iostream>
#include<fstream>
#include"ConsoleFunctions.h"
using namespace std;
class Maze{
    int rows;
    int cols;
    public:
    Maze():rows(0),cols(0){}
    int getRows(){return rows;}
    int getCols(){return cols;}
    void printMaze(){
        ConsoleFunctions cf;
        cf.setConsoleTitle("MazeRunner");
        ifstream file;
        file.open("maze.txt");
        if(!file.is_open()){
            cout<<"Error! File cannot be opened";
            return;
        }
        char ch;
        int rows=0;
        int cols=0;
        int currentcols=0;

        while(file.get(ch)){
            if(ch=='\n'){
                cout<<endl;
                rows++;
                if(currentcols>cols) cols=currentcols;
                currentcols=0;
                continue;

            }
            if(ch=='1'){
                cf.SetColor(2,3);

            }
            else{
                cf.SetColor(1,5);

            }
            cout<<char(219);
            currentcols++;
            
        }
        if(currentcols > 0){
        rows++;
        if(currentcols > cols) cols = currentcols;
    }
    file.close();

    }

};
int main(){
    Maze maze;
    maze.printMaze();
    int r=maze.getRows();
    int c=maze.getCols();


}
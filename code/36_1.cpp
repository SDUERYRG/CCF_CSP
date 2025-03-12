#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    int x,y;
    string commands;
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y >> commands;
        for(char command : commands){
            if (command == 'f'&& y+1 <= n && y+1 >= 1)
            {
                y=y+1;
            } else if (command == 'b' && y-1 <= n && y-1 >= 1)
            {
                y=y-1;
            } else if (command == 'l' && x-1 <= n && x-1 >= 1)
            {
                x=x-1;
            } else if (command == 'r' && x+1 <= n && x+1 >= 1)
            {
                x=x+1;
            } 
        }
        cout << x << " " << y << endl;
    }
}
#include <iostream>

using namespace std;

int main(){

    int rating = 3;

    switch(rating){

        case 1:
        puts("rated as 1 star");
        break;

        case 2:
        puts("rated as 2 star");
        break;

        case 3:
        puts("rated as 3 star");
        break;

        case 4:
        puts("rated as 4 star");
        break;

        case 5:
        puts("rateda as 5 star");
        break;

        default:
        puts("not rate between 1 and 5");
        break;
    }

    return 0;
}
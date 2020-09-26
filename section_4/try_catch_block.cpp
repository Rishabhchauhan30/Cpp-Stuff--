#include <iostream>

using namespace std;

int main(){

    //int call_api = 2;

    //float call_api = 2.0;

    char call_api = 'r';

    try {
        cout << "trying to use API value\n ";
        cout << "did some testing with API value\n ";
        throw call_api;
        cout << "NO code execute after return and throw\n ";

    } catch (int x) {
        cout << "integer exception handled\n";

    } catch (float y) {
        cout << "float exception handled\n";

    } catch (...){
        cout << "something went wrong\n";
    }

    cout << " keep on moving wit rest of code\n";

    return 0;
}
#include <iostream>
#include <tuple>
#include <string>
#include <vector>


using namespace std;


void Test_1() {
    cout << __PRETTY_FUNCTION__ << ":" << endl;
    tuple<int,int,int> ti1 = {10,20, 30};
    auto ti2 = make_tuple(10,20,30);
}


void Test_2() {
    cout << __PRETTY_FUNCTION__ << ":" << endl;
    tuple<string,vector<string>, pair<string,int>> tpp = {"please smell", {"move", "shift"}, make_pair("item",32)};
}

int main( int argc, char* argv[] ){ 
	//compare("HI","WORLD");
    Test_1();
    Test_2();
	return 0;
}

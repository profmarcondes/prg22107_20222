#include <iostream>

using namespace std;

class Die {
  private:
    int _faceValue;

  public:
    Die(){
        srand (time(NULL));
        roll();
    }
    void roll(){
        _faceValue = (rand() % 6) + 1;
    }
    int faceValue(){
        return this->_faceValue;
    }
    void faceValue(int faceValue){
        if(faceValue > 0 && faceValue < 7){
            _faceValue = faceValue;
        }
    }
};


int main()
{

    Die obj;

    cout << "Face value = " << obj.faceValue() << endl;

    obj.roll();

    cout << "Face value = " << obj.faceValue() << endl;
    return 0;
}

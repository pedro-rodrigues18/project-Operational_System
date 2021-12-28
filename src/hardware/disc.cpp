#include "headers/disc.hpp"

//Constructor
Disc::Disc(int size)
{
    this->size = size;
    
    Data data = Data("","","","00/00/0000 - 00:00");
    for(int i=0; i < size; i++){
        this->disc.push(data);
    } 
}

//Functions
void Disc::showInfo()
{
    int sizeAux = 0;
    if(!disc.empty()){
        stack<Data> discAux = disc; 

        disc.top().printHead();
        for(long unsigned int i = 0; i < disc.size(); i++){
            discAux.top().print();
            if(discAux.top().name != ""){
                size++;
            }
            discAux.pop();
        }
        disc.top().printFooter();

    }
    cout<<"Memória Total:     "<<size<<endl;
    cout<<"Memória Utilizada: "<<sizeAux<<endl;
    cout<<"Memória Diponível: "<<size - sizeAux<<endl;
    cout<<endl;
}
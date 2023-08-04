#include<iostream>
using namespace std;
int binarysearch(int array[],array size,int key)
int start=0;
int end=size-1;
int mid=(start+end)/2


while(start<=end){
    if(array[mid]==key){
return mid;
    }
    if(key<mid){
        end=mid-1;
    }
    else{
        start=mid+1;
    }mid=(start+end)/2;
return -1;
}

int main(){
    array even[6]={1,3,5,6,8,9};
    array odd[5]={1,3,4,6,7};
    int index = binarysearch(even,6,8);
    cout<<"Index of 8"<< index<<endl;
    int index = binarysearchodd,5,7);
    cout<<"Index of 7"<< index<<endl;
    return 0;

}

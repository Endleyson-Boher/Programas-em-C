#include<stdio.h>

int main(){

int aux, x, y; int v[]={1, 2, 3, 4, 5};

for(x=0; x<4; x++){

    for(y=x+1; y<5; y++){

        if(v[x]>v[y]){

            aux = v[x];
            v[x] = v[y];
            v[y] = aux;

        }

    }

}

printf("%i \n",v[0]);
printf("%i \n",v[1]);
printf("%i \n",v[2]);
printf("%i \n",v[3]);
printf("%i \n",v[4]);
}

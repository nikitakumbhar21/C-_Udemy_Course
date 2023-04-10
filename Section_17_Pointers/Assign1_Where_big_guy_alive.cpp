#ifndef EXERCISE_H
#define EXERCISE_H

int*  maximum_address( int data[], unsigned int size);

#endif // _EXERCISE_H

int*  maximum_address( int data[], unsigned int size){

  int * max_address;
  int max_elt{};

  for(unsigned int i{} ; i < size ; ++i){
    if( data[i] > max_elt){
      max_address = &data[i];
     max_elt = data[i];
    }
  }
  return max_address;
}

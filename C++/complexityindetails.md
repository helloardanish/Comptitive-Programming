### Levels > O(n)    ------------   O(logn)  ---------  O(n)         -----------        O(nlogn)      --------------      O(n^2)   -----------    O(2^n)


## Figures

![complexity images](images/complexity.png)

### Examples

## Complexity O(1)

A = B + C

C = 1 + 8

## Complexity O(logn)

if program takes

1 seconds to compute 10 elements : 10^1

2 seconds to compute 10 elements : 10^2

3 seconds to compute 10 elements : 10^3

4 seconds to compute 10 elements : 10^4

......




### Code Examples

## Complexity O(1)

```cpp
cout << "hello" << endl;
if(something){
  cout<< "done";
}
```


## Complexity O(logn)

```cpp

for(int i=1; i<=n; i=i*2){
  cout << "hello";
}

// if n=2, 4, 8, 16, 32
// will only run 1, 2, 3, 4 times
// log2n 


for(int i=1; i<=n; i=i*3){
  cout << "hello";
}

// here i values goes like this 1 > 3 > 9 > 27 > 81 & so on..........
// log3n

```

## Complexity O(n)

```cpp

for(int i=1; i<=n; i++){
  cout << "hello";
}

// i increasing 1 times if we increase n 1 times
// if n is 10 it will run 10 times and
// if n is 100 it will run 100 times

```


## Complexity O(nlogn)

```cpp

for(int i=1; i<n; i++){
  for(int j=1; j<n; j=j*2){
    cout << "hello";
  }
}

// first loop will run n times
// second loop will run log n times
// so its complexity will be nlogn

```


## Complexity O(n^2)

```cpp

for(int i=1; i<n; i++){
  for(int j=0; j<n; j=j+2){
    cout << "hello";
  }
}


// first loop n times
/* second loop n/2 times means n 
too whether it will be 2n, 5n, or n/5. 
it will be considered as n */

```



## Complexity O(2^n)

```cpp

int fibonacci(int number){
  if(number <= 1){
    return number;
  }
  return fibonacci(n-2) + fibonacci(number-1);
}

// it will run 2 times at first
// but recursively it will run multiple times till the condition (value less than oe equal to 1)


```

### Algorithm example

> If you want to sort an array there are many algorithms like bubble sort, insertion sort, merge sort, etc.


> If you use bubble sort your code complexity will be **__n^2__** but if you use merge sort algo the complexity will be **__nlogn__**.


> *Its your responsibility to choose the right algorithm for your problem statement*

### That's It about complexity.
## Happy Coding
# A R

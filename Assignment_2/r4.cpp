/*No the declaration "void func(char= '*', int =45);" is not valid in c++

 In c++,when defining function parameter with default values, you must specify the data type for each parameter, the correct way to declare this function would be:*/
  
 void func(char ch= '*', int=45);
 
 /*If we declare this way the compiler will generate a syntax error.The compiler will complain that declaration is not valid because it expects a type before the parameter name.We will see an error message indicating a "type name is not allowed"*/

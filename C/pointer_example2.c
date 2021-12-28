# include <stdio.h>
int main( )
{
int i = 3, *j, **k, ***l ;
j = &i ;
k = &j ;
l = &k ;
printf ( "Address of i = %u\n", &i ) ;
printf ( "Address of i = %u\n ", j ) ;
printf ( "Address of i = %u\n ", *k ) ;
printf ( "Address of j = %u\n ", &j ) ;
printf ( "Address of j = %u\n ", k ) ;
printf ( "Address of k = %u\n ", &k ) ;
printf ( "Value of j = %u\n ", j ) ;
printf ( "Value of k = %u\n ", k ) ;
printf ( "Value of i = %d\n ", i ) ;
printf ( "Value of i = %d\n ", * ( &i ) ) ;
printf ( "Value of i = %d\n ", *j ) ;
printf ( "Value of i = %d\n ", **k ) ;
printf ( "Value of i = %d\n ", ***l) ;
printf ( "Address of i = %d\n ", **l) ;
printf ( "Address of j = %d\n ", *l) ;
return 0 ;
}

//*k = *(&j) = j = &i = 6422300

//**k = *(*k) = *(*(&j)) = *j = *(&i) = i = 3
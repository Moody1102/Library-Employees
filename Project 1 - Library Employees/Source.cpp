#include "Library.h"
#include "Date.h"

int main(){
  
  // delete me
  Date date_1(2013, 2, 10); //add a date with the US format(mm-dd-yyy). The date is Feb 10, 2013
  Date date_2(2014, 5, 1); //add a date with the US format(mm-dd-yyy). The date is May 1, 2014
  Date date_3("5-1-2014"); //add a date with the US format(mm-dd-yyyy), the date is May 1, 2014
  Date date_4("2014-5-1", DateFormat::Standard); //add a date with the standard format(yyyy-mm--dd), the date is May 1, 2014
  date_1.add_days(5); //add 5 days to date_1
  bool larger = date_1 > date_2; //compare if date_1 > date_2
  bool equal = date_1 == date_2; //compare if date_1 == date_2
  string text = date_1.toString(); //conver date_1 to string (the string will be made based on the format
 //
  
  Library library;
  
  library.add_book("Software Engineering");
  library.add_book("Chemistry");
  library.add_employee("Adam");
  library.add_employee("Sam");
  library.add_employee("Ann");
  
  library.circulate_book("Chemistry", Date(2015, 3, 1, DateFormat::US));
  library.circulate_book("Software Engineering", Date(2015, 4, 1, DateFormat::US));
  
  library.pass_on("Chemistry", Date(2015, 3, 5, DateFormat::US)); //tell the next employee to pass the book on March 5, 2015
  library.pass_on("Chemistry", Date(2015, 3, 7, DateFormat::US));
  library.pass_on("Chemistry", Date(2015, 3, 15, DateFormat::US)); //at this point in time, the system will archive the chemistry book.
  library.pass_on("Software Engineering", Date(2015, 4, 5, DateFormat::US));
  library.pass_on("Software Engineering", Date(2015, 4, 10, DateFormat::US));
  library.pass_on("Software Engineering", Date(2015, 4, 15, DateFormat::US));
}

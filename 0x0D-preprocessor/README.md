Object-like Macros

An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.

You create macros with the ‘#define’ directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list. For example,

     #define BUFFER_SIZE 1024
defines a macro named BUFFER_SIZE as an abbreviation for the token 1024. If somewhere after this ‘#define’ directive there comes a C statement of the form

     foo = (char *) malloc (BUFFER_SIZE);
then the C preprocessor will recognize and expand the macro BUFFER_SIZE. The C compiler will see the same tokens as it would if you had written

     foo = (char *) malloc (1024);
By convention, macro names are written in uppercase. Programs are easier to read when it is possible to tell at a glance which names are macros.



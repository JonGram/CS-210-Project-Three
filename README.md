CS210 PROJECT THREE

This program’s goal is to develop an item tracking program for the Corner Grocer company, so they can analyze the text record of all purchased products throughout the day. It needs to develop four menu options performing the following actions.

    Allow the user to search for a product and find the number of times it was purchased.
    Display each purchased item paired with its frequency.
    Display a histogram of all purchased items followed by special characters representing their frequency in the document.
    Exit the program.

For this project, developing the function that counts the number of times each item appears in the document was the least of the challenges I faced.
However, the program's documentation did not follow the norms as it needs to include screenshots of the outputs.
The most challenging piece of code I overcame was to display each purchased item paired with its frequency and aligned in the center. Fortunately, I was able to see that for all to be centered in the middle of the screen, the middle of each product paired with their frequency must be aligned. That is, printing half of each product's name and its frequency on a constant length L on each line, I need to print _x_ leading spaces followed by half of the length of the product name and the length of its frequency, such that _x = L – (1/2)y_ and y being the length of the product name and the half length of its frequency, without ignoring the one space character that separates them). Using the nCharString() function of our projects (One and Two) which prints a given character on a given length, _(nCharString( size_t length, char c))_, I was able to print the leading spaces.


The new skills gained while developing this project were the map concepts. The use of the emplace() function and it->first, and it->second to access the map contents while iterating from its first to the last element of the map (“it” is an iterator, -> is the member accessor operator, first: accessing the Key element of the map, and second: accessing the key’s value).


From the beginning,  I started naming objects in a way that they represent their meaning in the project documentation. I followed by writing general pseudocodes for each menu option then I began to see other subdivisional functions. I continued building the functions by testing each short line of codes while improving them. I kept all other functions in different files so that the main() function can be readable and short. I included enough spaces and made sure that variables, statements, comments, and functions are aligned for the codes to be readable.

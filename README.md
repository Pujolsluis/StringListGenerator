# String List Generator
Program to generate a collection of strings for a Collection Initialization (Vector, List, etc).

## How to use
- Clone the repo.
- Open and compile Project in your C++ IDE of Choice.
- Run the Program and insert an input file with space or line break separated strings.
- Check that if you are on **Windows** you have activated the **Quick Edit Mode** in your cmd. To do so right click you're cmd choose **Properties > Options > Edit Options**.
- Insert the EOF Signal to the console **Windows:** <kbd>Ctrl</kbd> + <kbd>Z</kbd> or **Mac:** <kbd>Cmd</kbd> + <kbd>D</kbd>

### Examples (List types)
You can input a list of sentences with line breaks.
```txt
3D animation
The game has started
Jump over the fence
Runing as fast as the speed of light
Looking into the eyes of the lion
```

### or

You can input a list of space separated words.

```txt
Cat Dog Fish Hamster Crocodile
```

## Result
Copy and paste the result to you're app source code and you're ready to keep on you're happy coding streak!
```txt
---- DONE READING INPUT FILE ----
"3D animation",
"The game has started",
"Jump over the fence",
"Runing as fast as the speed of light",
"Looking into the eyes of the lion",
---- DONE PRINTING OUTPUT ----
```

```txt
---- DONE READING INPUT FILE ----
"Cat",
"Dog",
"Fish",
"Hamster",
"Crocodile",
---- DONE PRINTING OUTPUT ----
```

## Type of lists
If you wish to switch between the type of input files you are going to read you just need to comment and uncomment the following lines of code.
```cs
    // Line break sentence list.
    while(getline(cin, inputString)){
        inputList.push_back(inputString);
    }

    // Space separated word list.
    /*
    while(cin >> inputString){
        inputList.push_back(inputString);
    }
    */
```

## Sorting
If you wish to sort the list before printing it out to initialize you're own collection, you can uncomment the following line in the program and it will sort the list before giving you the output.
```cs
// sort(inputList.begin(), inputList.end());
```

## Contributors
If you wish to contribute to the project all ideas and improvements are welcomed, send in a PR and add yourself in the list of Contributors!
* [Luis Pujols](https://github.com/pujolsluis)
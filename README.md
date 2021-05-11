# Battle-Ship
Fenote Berhane
CSE 283 Project 


Welcome to Battleship

I am going to write a program using the coding language C++ that plays the game Battleship. The computer will generate a board with a line that divides it in half. The one players will input their names and pick where they want to put their ship to be. They will also pick how long they want their ships to be.Then the game will begin. 
The objective of this game is to hit your opponent's ship’s before they hit yours.
Both players will have ships somewhere on his/her screen.  Each player will try and “hit” the other by inputting coordinates of one of the squares on the board. Each square will be labeled by a number and an integer( An example of a square label is A1).  Each ship will get up to three lives,meaning how many hits they can take before being eliminated. Once a player sinks all the opposing player ships the game will end and it displays who won.   
	Since I was the sole individual working on developing this game I ran into a plethora of challenges I never expected. In fact I actually ended up developing two completely different methods for running my game. I included both methods in the text file for the code but, with both methods I pretty much had to pass the same milestone. 
The first major challenge I faced was developing the board for the game. Initially I wanted to use a list of strings to store all the possible locations on a battleship board (ex “A1”,”A2”, “A3”)  but it wasn't very efficient. Instead I decided to create a 2-D vector array called Matrix into order to represent my board. By storing different symbols within Matrix I was able to develop an exact replica of the physical game board. I used the * character to denote empty space, the letter S to symbolize ship placement and empty space ( “ ” ) to  represent the divide between fields. Using a 2d array also gave me a place to store and reference events that occurred during the game. In addition to ship placement I used my matrix vector to record a players misfires, denoted with the charter “O”, and successfully attack,which I denoted with the letter X. Even though I creating the vector matrix felt like major accomplishment I still had a aways to go before I was done.
 Labeling the board was pretty simple it just took carefully placed String in the display function I wrote display the game. The hard part came when I had to depict the user input on to the board. Let's say the user wanted to doc their ship at A2 he or she would enter a Char A and the int 2. While I could easily use the int value 2 to represent the row 2 in the matrix I created  and getting the char value A to corrisode with it column value in the matrix wasn’t going to be that simply. At first I thought about creating a function composed of if  statements that would take a Char value return and int corresponding to the row that char represented in the matrix. I would predertrim what a letter values belong to what columns return and int based on that. This method was highly enifictant and ended up taking way to much lines of code.Then I came up with the idea to convert that char into its corresponding int value and decided to subtract from that value until I got the desired column number for the matrix. The only problem with this was that I now had to make sure the user always enter capital letter since lower and capital letters don't have the same numerical value in any coding lague.  At first I thought about using a function to just convert the users input to a capital letter but then I thought about all the other errors they could make. What if they put a letter outside of the range of the board. This is when i decided  to create a function to prevent the user form making silly mistakes that would crash the game. I proceed to create this function where I would use a while loop check to see if there entry was valid and if it was not it would  to keep asking them to enter values until they got it right.
The next challenge I faced was to draw there inputs onto the board and display them. At this point I had create the matrix in the main Int function and realized I would have consistently  include a parameter for the matrix in any function I wanted to use to edit my game board. This is when I decided to change the matrix from a local variable to a global one. For a while this worked perfectly. I was actually able to complete the game using this methodology. I even commented that method out and attached it to the end of my code for proof. But In the end I just wasn’t comfortable with the design of the product I develop. 
This is when I decided to change up the way I viewed the game board. Instead of treating it as a variable I decided to make it into a Class. The class included functions to set up the game board, display and make edits to it. Making it into a class made picture what steps to take next so much earlers. 
And i didnt stop there either I counted on this line of thinking a decided to remove all my consent bard of random function and loops that prevented the user from making silly errors and decided to use create a subclass to the Game board and called it reffer. It acted as a referrer stopping all illegal moves the player may tried to make.I used this class to get the initial docking coordinates, revive Attack commands I even use i to make sure the CPU did not make any mistake. The only issue with this class was all the user data was being stored in the reffer class so I decided to use create another subclass to represent the player called The Player Class. This way the Player could have accesses to the data via inheritance. Incorporating really changed the way i viewed this project. It made me a lot more than i thought I would to achieve the most basic take. For example it drastically change the way i viewed storing the data for name. 
This may seem like a pretty simple task but, I used two completely different methods to complete it. In my first go around I simply initialize a string variable called name and stored it in the main class. The second time I had to tackle this problem I created a Class Named Player and used a the function SetPlayerName to store the name in a protected string variable within the Player class. I would then have to create an addition function just to access that data. While this may seem like a lot of work I understand the design of my current game is much better and is much easier to update than the other method. If I wanted to increase the size of my board or add additional ship the processes and logic behind said processes is much easier to conceptualize as well as implement. 
	In my first attempt to develop the game I used a function dominated approach to achieve my goal. 


a. State the problem(s) you want to solve. Divide them into subtasks and show the relations among the subtasks. b. State your plans on developing your project. With respect to our course (CSE 283), it must include functional decomposition, object-oriented design and implementation using C++. c. Reference the appropriate section(s)/chapter(s) from our text (or other reference, when applicable) to indicate where the ideas/techniques of your work are drawn from. d. In each of the above items, use list(s), chart(s), diagram(s) and table(s) to help your illustration.










Reference

Source: https://www.cs.nmsu.edu/~bdu/TA/487/brules.htm 
I used this website to create the rules of my game.

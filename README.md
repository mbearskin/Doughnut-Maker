# Doughnut-Maker
Intro to c++ assignment 3
Prompt:

Background:  Marge seems to feel that she needs to keep her hard-working husband as happy as he can be so that he brings home the bacon….and the butter, fried chicken-skins, etc.  To do this, she greets him every morning with a doughnut draped in the finest toppings.   Marge buys basic doughnuts from Krusty and from Chief Wiggum (known henceforth as the Krustybase and the Wiggumbase).  (The two basic doughnuts are fundamentally different in that Krusty produces by frying them in bacon fat and fills them with various animal parts, while Wiggum’s are fried in butter and filled with various candied fruit.) She determines what she will top his doughnut with based on “signals” he sends as he is making his way from bed to reality.  Since his scheme has gotten so byzantine, she wants you to write a program that will do the job for her.  She will input the information sent by Homer and the program should tell her what kind of doughnut to start with and what to put on top of it.  It will also tell her how long Homer has until he’s going to have to find some other piece of heart-stopping junk-food to devour to keep his astronomically high cholesterol astronomical.

Specifications:  Your program is to query Marge for the following information:

         The number of times Homer thumps his head on the floor as he fell out of bed this morning
         The number of times he yells “DOH” as he shaves
         How many steps of the stairway Homer successfully navigates before tumbling the remainder of the 10-step flight
         The number of items of clothing he is missing (as required for work) when he comes to the kitchen
You’ll notice that all of these are some indication of how bad Homer’s day is going.  Thus, Marge will use these inputs to build a “pacifier” for him – the more the complaints, the better the doughnut.  Here are her rules for making a doughnut for Homer:

 If the number of thumps is even, use a Krustybase; otherwise a Wiggumbase.
The number of “DOH”s is the number of strips of bacon to put on a Krustybase.  Since one NEVER puts bacon on a Wiggumbase, the “DOH”s will determine the number of pats of butter to put on a Wiggumbase.
The number of steps Homer tumbles down plus the number of “DOH”s is the number of ounces of Velveeta she should melt on top of the doughnut, regardless of base.
A full-size deep-fried chicken skin (drippings included) is draped over the doughnut if the number of clothing items missing is divisible by 3.
A dollop of grease-cream* is added to a Krustybase doughnut if the number of clothing items missing is greater than 2, and two skins are added to a Wiggumbase if that number is 0.  It’s sort of a bonus either way.
No more than three unique toppings can adorn any doughnut due to the whacky gravity in Springfield.   So, once Marge has reached 3 layers of vein-clogging crap, she has to stop regardless of the rules.  Apply the aforementioned rules in the aforementioned order.
If any of the inputs are illogical (such as negative thumps, 12 steps, 0 “DOH”s since Homer ALWAYS cuts himself at least once, etc), Marge should just hand Homer a beer.
Your program will then tell Marge what kind of doughnut (or a beer) to prepare.

                e.g.   Krustybase with 4 strips of bacon, cheese, and a chicken skin.

Also, a score for the doughnut will be calculated and output for Marge to say “hmmmm!” at.  Here are the values:

5 pts for each strip of bacon
3 pts for each pat of butter
6 pts for an oz of velveeta
50 pts for a chicken skin
13 pts for a dollop of grease-cream
10 pts for a doughnut base
4 pts for a beer – the healthy choice!
Be sure to make your prompts and outputs pretty.  Also, you are to use if-else statements and NOT the switch statement for this assignment.  And, we want you to pay particularly close attention to the appropriate use of constants in the program.  There should be many constants in your code and you should use them.  To test yourself in the use of constants in your coding, just try to imagine that the day before this program is due we might change “velveeta” to “American cheese”, or 13 pts to 16 pts, or Marge to Barney.  You certainly wouldn’t like to go through all your code making all those changes, preferring to make the change in only one spot.

When you submit:  enter 

5 for the thumps, 
9 for the “DOH”s, 
 3 for the number of steps successfully taken (before falling down the rest),
3 items of clothing missing.
As usual, be sure ask your instructor if you have any questions.  If he says you have questions, then ask him for answers.

*Like ice-cream, except it's made with .... bacon grease.  Goes down smooth.

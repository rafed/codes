use strict;
use POSIX;

# This script was written by Dr. Stephan J Sanders (UCSF) for the Neurobiology program 
# at the Marine Biology Labs at Wood's Hole, MA. 
# Modified by Albert Lau (Johns Hopkins University).

# It aims to teach basic UNIX commands and common pirate stereotypes, not necessarily 
# in that order.

# It is provided free for non-commercial applictions with one condition:

# Usage: perl treasureHunt.pl

# There MUST, and SHALL be, real treasure. You can describe where the treasure is 
# hidden here:

my $TA = 'Morgan Nance (morganlnance\@gmail.com)';

my $theTreasure = "You've found my treasure! Great job! Go to the front of the classroom and dig into
the tote bag containing your booty. \n\nThen please tar your tote bag (the one on your computer containing 
the clues) and email the tarfile to $TA.";

# Create locations
my @places = (
"pineTree", "largeStone", "blueHouse", "church", "pub", 
"boat", "smallStone", "bridge", "ashTree", "beach", "oakTree", 
"waterTower", "bellTower", "harbour", "ferryPort", "busStop", 
"library", "giftShop", "lab", "cafe", "bikeShop", "bikePath", 
"lake", "piratesCove", "parrotShop", "prostheticShop", 
"ophthalmologist", "rumBarrel", "sailMakers", "plankMaker", 
"swordShop", "lightHouse", "registrarsOffice"
);
 
my @directions = (
"eastOneStep", "eastTwoSteps", "eastThreeSteps", "eastFourSteps", "eastFiveSteps",
"southOneStep", "southTwoSteps", "southThreeSteps", "southFourSteps", "southFiveSteps",
"westOneStep", "westTwoSteps", "westThreeSteps", "westFourSteps", "westFiveSteps",
"northOneStep", "northTwoSteps", "northThreeSteps", "northFourSteps", "northFiveSteps"
);

my @directions2 = (
"eastOneStep", "eastTwoSteps", "eastThreeSteps", "eastFourSteps", "eastFiveSteps",
"southOneStep", "southTwoSteps", "southThreeSteps", "southFourSteps", "southFiveSteps",
"westOneStep", "westTwoSteps", "westThreeSteps", "westFourSteps", "westFiveSteps",
"northOneStep", "northTwoSteps", "northThreeSteps", "northFourSteps", "northFiveSteps",
"closeEyesAndWalkTowardsTheSoundOfTheWaves", "atThreeOClockFollowParallelToTheShadowFromTheFlagPole", 
"atTheSummerSolsticeDigWhereTheFirstRayOfLightMeetsThePath"
);

foreach my $dir (@places){
	mkdir $dir;
	foreach my $dir2 (@directions){
		mkdir $dir.'/'.$dir2;
		foreach my $dir3 (@directions2){
			mkdir $dir.'/'.$dir2.'/'.$dir3;
		}
	}
}

# Create output files
my $output1 = 'Clue01_S.txt';
my $OUT1 = &openOut($output1);

print $OUT1 "While browsing the Sheridan Libraries, you find an old diary from Captin Kidd. Inside is a curious last entry:\n\n".
"Dearrrrrrr Diary-- Polly and I have buried our treasure in a place no one will ever find! ".
"I have left a series of clues to its whereabouts that only I, a pirate and UNIX master, can follow. The first clue is to go to the ".
"water tower, walk 3 steps to the west, 5 steps to the south, then dig! \n\n".
"The librarian says that Captin Kidd was never heard from again... \n\n".
"Before you begin your quest, you should make a directory (mkdir) called \'toteBag\' to hold all the clues you find. Copy (cp) this first clue ".
"into it now, check it is there (cd, ls), then check where you are (pwd) to know where to send further clues.\n\nOff to the water tower!\n";

my $output2 = 'waterTower/westThreeSteps/southFiveSteps/Clue02_W.txt';
my $OUT2 = &openOut($output2);

print $OUT2 "The next clue is in that old rum barrel, 2 steps north, then 4 steps to the west. Note to self: I could only find a small ".
"rum bottle to put the clue in, so I had to squeeze it really tight. I might need to use gunzip to be able to read it. Remember to save it to ".
"the tote bag (cp).\n";

my $output3 = 'rumBarrel/northTwoSteps/westFourSteps/Clue03_O.txt';
my $OUT3 = &openOut($output3);

print $OUT3 "Polly was worried that some of those scientist types hanging around here might try to follow this trail. ".
"I've taken the precaution of hiding the next clue amongst 99 pieces of blank paper I got from the registrar's office. It is the ".
"only one with any writing on it so should stand out to me (ls). It is 5 steps south and 1 step west.\n";

`gzip $output3`;

foreach my $num (0..100){
	my $output4 = 'registrarsOffice/southFiveSteps/westOneStep/Clue04_R_'.$num.'.txt';
	my $OUT4 = &openOut($output4);
}

my $here = `pwd`;
$here =~ s/[\n\r]//g;
my $output4 = 'registrarsOffice/southFiveSteps/westOneStep/Clue04_R_78.txt';
my $OUT4 = &openOut($output4);
print $OUT4 "Need to get home for dinner. Since I know exactly where the next clue is, I can go straight there by pasting this in (cd):\n".
$here."/harbour/westThreeSteps/northTwoSteps\n";

my $output5 = 'harbour/westThreeSteps/northTwoSteps/Clue05_D.txt';
my $OUT5 = &openOut($output5);

print $OUT5 "Left a pretty perl on the beach. That'll fox anyone following me. One step east and 1 step south.\n";

my $output7 = 'bridge/northFiveSteps/westOneStep/Clue07_H.txt';
my $OUT7 = &openOut($output7);

print $OUT7 "True UNIX masters use tab to complete file names. I made a name so long that their fingers ".
"will fall off unless they tab it! Off to the pine tree, 5 steps north then at 3 o'clock follow the flag pole shadow to ".
"the rock.\n";

my $output8 = 'pineTree/northFiveSteps/atThreeOClockFollowParallelToTheShadowFromTheFlagPole/Clue08_O.txt';
my $OUT8 = &openOut($output8);

print $OUT8 "Really can't emphasise just how useful tab is - saved my bacon many a time. Off to the ".
"parrot shop, 3 steps east, then close eyes and follow the ocean sound.\n";

my $output9 = 'parrotShop/eastThreeSteps/closeEyesAndWalkTowardsTheSoundOfTheWaves/Clue09_P.txt';
my $OUT9 = &openOut($output9);

print $OUT9 "It physically hurts to watch other pirates type out all those commands instead of using tab. Let's try the ".
"lighthouse, 5 steps west, then look for where the first light of the summer solstice hits the path.\n";

my $output10 = 'lightHouse/westFiveSteps/atTheSummerSolsticeDigWhereTheFirstRayOfLightMeetsThePath/Clue10_5.txt';
my $OUT10 = &openOut($output10);

print $OUT10 "Ok. Since we've tried making stuff, now let's see how good any landlubbers are at deleting stuff. Seems appropriate to go to the ".
"prosthetic shop for this. 1 step north, 4 steps east.\n";

my $output11 = 'prostheticShop/northOneStep/eastFourSteps/falseClue11.txt';
my $OUT11 = &openOut($output11);
print $OUT11 "There is nothing here!!! Try the perl script...\n";

my $output11a = 'prostheticShop/northOneStep/eastFourSteps/Clue11_N.txt';
my $OUT11a = &openOut($output11a);

print $OUT11a "For the next clue we'll need to move/rename a file. Go to the large stone, walk 2 steps south and 4 steps west, ".
"and look for the quartz stone nearby. Instead of copying it to your tote bag, try moving it there (mv). Once it is in your tote bag, you ".
"can rename (mv) it to \'Clue12_5.txt\' \n";

`mv prostheticShop/northOneStep/eastFourSteps/Clue11_N.txt prostheticShop/southThreeSteps/westThreeSteps/Clue11_N.txt`;

my $output12 = 'largeStone/southTwoSteps/westFourSteps/quartz.txt';
my $OUT12 = &openOut($output12);

my $command = 'touch largeStone/southTwoSteps/westFourSteps/grey.txt largeStone/southTwoSteps/westFourSteps/purple.txt '.
'largeStone/southTwoSteps/westFourSteps/white.txt largeStone/southTwoSteps/westFourSteps/rolling.txt '.
'largeStone/southTwoSteps/westFourSteps/roses.txt largeStone/southTwoSteps/westFourSteps/mason.txt '.
'largeStone/southTwoSteps/westFourSteps/granite.txt largeStone/southTwoSteps/westFourSteps/grit.txt '.
'largeStone/southTwoSteps/westFourSteps/sedimentary.txt largeStone/southTwoSteps/westFourSteps/igneous.txt '.
'largeStone/southTwoSteps/westFourSteps/metamorphic.txt largeStone/southTwoSteps/westFourSteps/marble.txt '.
'largeStone/southTwoSteps/westFourSteps/brown.txt largeStone/southTwoSteps/westFourSteps/bladder.txt '.
'largeStone/southTwoSteps/westFourSteps/kidney.txt largeStone/southTwoSteps/westFourSteps/rosetta.txt '.
'largeStone/southTwoSteps/westFourSteps/blarney.txt largeStone/southTwoSteps/westFourSteps/head.txt '.
'largeStone/southTwoSteps/westFourSteps/sand.txt largeStone/southTwoSteps/westFourSteps/lime.txt ';
`$command`;

print $OUT12 "You will find the next clue at the end of the file (tail), not the start... and it's a long file... Try the ".
"bike path. 3 steps south, 1 step east\n";

my $output13 = 'bikePath/southThreeSteps/eastOneStep/Clue13_W.txt';
my $OUT13 = &openOut($output13);

print $OUT13 "Nothing up here... try the tail.\n";
foreach my $num (1..5000){
	print $OUT13 "\n";
}

print $OUT13 "Great! Now copy this clue the the tote bag. Go to the tote bag and look at the last letter in the filenames of the clues.\n";

my $output14 = 'swordShop/northFiveSteps/westFiveSteps/xMarksTheSpot.txt';
my $OUT14 = &openOut($output14);

print $OUT14 "You've found an old wooden box engraved with the letters 'KIDD' in large friendly letters. On the front is a combination ".
"lock with the words \'polly knows the answer\' written underneath. Search (grep) for polly in this file. Write (using vim/emacs/Atom) the number you ".
"find in the file \'key.txt\', and run the perl script \'openLock.pl\'.\n";

my @let = ('a'..'z');
foreach my $num (0..562){
	my $twoDig = ceil(rand(100));
	my $letThree = $let[rand(26)];
	my $letFour = $let[rand(26)];
	my $letFive = $let[rand(26)];
	print $OUT14 "po".$letThree.$letFour.$letFive."\t$twoDig\n" unless ($letThree.$letFour.$letFive eq 'polly');
}
print $OUT14 "polly\t42\n";
foreach my $num (0..324){
	my $twoDig = ceil(rand(100));
	my $letThree = $let[rand(26)];
	my $letFour = $let[rand(26)];
	my $letFive = $let[rand(26)];
	print $OUT14 "po".$letThree.$letFour.$letFive."\t$twoDig\n" unless ($letThree.$letFour.$letFive eq 'polly');
}

my $command14 = 'touch swordShop/northFiveSteps/westFiveSteps/key.txt';
`$command14`;

###### write the perl scripts #####

# Script 1
my $outputPerl1 = 'beach/eastOneStep/southOneStep/Clue06.pl';
my $OUTP1 = &openOut($outputPerl1);

print $OUTP1 'use strict;'."\n\n";
print $OUTP1 '# This is a perl file - a short program that contains computer commands. You can run it by typing:'."\n".'# perl Clue06.pl'."\n\n";
print $OUTP1 '&out;'."\n\n".'my @num = ('."\n";
foreach my $num (0..943){
	print $OUTP1 "\n".$num.",\n\n\n\n";
}
print $OUTP1 ');'."\n\n".'sub out {'."\n".'print "Pretty perl! Ha, that was a good one! Before going on we should put this message into a file '.
'called Clue06_S.txt by rerunning this perl command and capturing STDOUT (>), then send it to the tote bag. Next, let\'s go to the bridge and '.
'walk 5 steps north and 1 step west.\n";'."\n".'}'."\n\n";
print $OUTP1 'my @num = ('."\n";
foreach my $num (0..678){
	print $OUTP1 "\n".$num.",\n\n\n\n";
}
print $OUTP1 ');'."\n";
close $OUTP1;

# Script 2
my $outputPerl2 = 'prostheticShop/northOneStep/eastFourSteps/realClue11.pl';
my $OUTP2 = &openOut($outputPerl2);

print $OUTP2 'use strict;'."\n\n";
print $OUTP2 'my @files = split /\n/, `ls`;'."\n\n";
print $OUTP2 'my $mark = 0;'."\n".'foreach my $file (@files){'."\n";
print $OUTP2 "\t".'$mark = 1 if ($file eq \'falseClue11.txt\');'."\n".'}'."\n\n";
print $OUTP2 'if ($mark == 0) {'."\n";
print $OUTP2 "\t".'`cp '.$here.'/prostheticShop/southThreeSteps/westThreeSteps/Clue11_N.txt ../../../toteBag/`;'."\n";
print $OUTP2 "\t".'print "You deleted it! What were you thinking? Quick, go to the trash can and get it back!\n";'."\n";
print $OUTP2 "\t".'sleep 2;'."\n";
print $OUTP2 "\t".'print "Only joking! That file is totally gone though. When you delete something in UNIX it is truly gone; there are no '.
'trash cans, restores, undos. rm = gone.\n";'."\n";
print $OUTP2 "\t".'print "Look in your tote bag (cd) for the real clue 11.\n";'."\n";
print $OUTP2 '} else {'."\n";
print $OUTP2 "\t".'print "Delete the false clue (rm) and try running this again,\n";'."\n".'}'."\n";
close $OUTP2;

# Script 3
my $outputPerl3 = 'swordShop/northFiveSteps/westFiveSteps/openLock.pl';
my $OUTP3 = &openOut($outputPerl3);
print $OUTP3 '# Try xMarks the spot'."\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
print $OUTP3 'use strict;'."\n\n";
print $OUTP3 'open IN, "key.txt" or die "could not find key.txt: $!\n";'."\n";
print $OUTP3 'my @in = <IN>;'."\n".'if ($in[0] =~ /42/){'."\n";
print $OUTP3 "\t".'open OUT, \'>\', "openTheBox.txt" or die "could not open openTheBox.txt: $!\n";'."\n";
$theTreasure =~ s/\'/\\\'/g;
print $OUTP3 "\t".'print OUT "'.$theTreasure.'\n";'."\n";
print $OUTP3 "\t".'print "The lock turns, now open the box (ls).\n";'."\n";
print $OUTP3 '} else {'."\n\t".'print "Wrong combination.\n";'."\n".'}';
close $OUTP3;

# Opens an output file
sub openOut {
	my ($file) = @_;
	open my $OUT, '>', $file or die "Could not open file $file: $!\n";
	return ($OUT);
}



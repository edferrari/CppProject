/*
~~ Main Loop Pseudo Code [4] ~~
Ask player to choose game version, number of players and names of
players.
Create the corresponding players and RollOfDice for the game.
while end condition is not reached
	next player takes a turn i.e., becomes active
	get input from active player before roll
	roll dice and show result
	print scoresheet of active player
	get input from active player after roll
	score dice according to input from active player
	loop over all non-active players
		print scoresheet of non-active player
		get input from non-active player
		score dice according to input
loop over all players
	calculate points for player
	print scoresheet
print overall winner
*/
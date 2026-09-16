# 121Lab4-Horse-Game

## main()
```
  make an array that stores each horse from 0 to 4 named horses
  set keepGoing to true (for while loop)

  while keepGoing:
    go through each horse in the array:
      call advance, giving the horse's number and the array
      print that horse's updated lane
      if the horse won:
        set keepGoing to false
    ask the user when they're ready to continue
```
## void func advance (int horseNum, int* horse)
```
  given a horse's number and a pointer to the array of horses
  generate a random num between 0 and 1 to determine if horse moves
  add that number to the horse position value in the array
```
## printLane (int horseNum, int* horse):
```
  for each pointNum of the length of the track:
    check if that point equals the current number the horse has reached:
      if so, print the horse number
    otherwise, print a .
```
## isWinner (int horseNum, int* horse):
```
  print out the horse that won from the array

// Timmy & Sarah think they are in love, but around where they live, they will only know once they pick a flower each. If one of the flowers has an even number of petals and the other has an odd number of petals it means they are in love.

// Write a function that will take the number of petals of each flower and return true if they are in love and false if they aren't.

// https://www.codewars.com/kata/555086d53eac039a2a000083/train/cpp

bool lovefunc(int f1, int f2) 
{
  return (f1 & 1) != (f2 & 1);
}


// if (n & 1) == 0 --> even else odd 
#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  assert(counts.lowCount == 2);
  assert(counts.mediumCount == 3);
  assert(counts.highCount == 1);
  for(int i=0;i<numberOfBatteries;i++)
  {
    if(chargeCycleCounts[i]<310)
    {
      lowCount=lowCount+1;
    }
    else if(chargeCycleCounts[i]>=310 && chargeCycleCounts[i]<=929)
    {
      mediumCount=mediumCount+1;
    }
    else
    {
      highCount=highCount+1;
    }
  }
  printf("No of Bulbs with low count: %d \n",lowCount);
  printf("No of Bulbs with low count: %d \n",mediumCount);
  printf("No of Bulbs with low count: %d \n",highCount);
  printf("Done counting :)\n");
}

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}

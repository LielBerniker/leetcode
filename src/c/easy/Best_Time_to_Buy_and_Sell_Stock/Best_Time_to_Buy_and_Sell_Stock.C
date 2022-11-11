int maxProfit(int* prices, int pricesSize){
    if (pricesSize == 0)
    return 0;
    int curPrice = *(prices);
    int goodPrice = false;
    int bestSell = 0;
for (size_t i = 1; i < pricesSize; i++)
{
   if(*(prices+i)>curPrice)
   {
    if((*(prices+i) - curPrice)>bestSell)
    bestSell = *(prices+i) - curPrice;
   }
   else
   curPrice = *(prices+i);
}
return bestSell;

}
static boolean oneDigit(int num)
    {
        return (num >= 0 && num < 10);
    }
    static boolean isPalUtil(int num, int dupNum)
    {
 
        if (oneDigit(num))
            return (num == (dupNum) % 10);

        if (!isPalUtil(num/10, dupNum))
            return false;
        dupNum /= 10;
        return (num % 10 == (dupNum) % 10);
    }

    static boolean isPal(int num)
    {
  
        if (num < 0)
           num = -num;

        int dupNum = num; 
      
        return isPalUtil(num, dupNum);
    }
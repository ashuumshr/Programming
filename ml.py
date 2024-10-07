import numpy
import pandas
myarr=numpy.array([[1,2,3],[5,6,7],[8,9,0]])
row=['a','b','c']
col=['one','two','three']
mydataframe=pandas.DataFrame(myarr,index=row,columns=col)
print(mydataframe)
# whichever is less peaked have higher entropy in continuous data


# >>INFORMATION GAIN
# it can be defined as the amount of information gained about the random variable or signals from observing another 
# random variable
# IG(S,A)= H(S)-H(S,A)

# >>Gini Impurity
# It is a measure of how often a randomly chosen element from the set would be incorrectly labelled if it was randomly 
# labelled according to the distributed of labels in the subset

# >>question

# AGE         COMPETITION         TYPE        PROFIT
# ______________________________________________________
# old         yes                 s/w         down        
# old         no                  s/w         down  
# old         no                  h/w         down  
# mild          yes                 s/w         down
# mild          yes                 h/w         down
# mild          no                  h/w         up
# mild           no                 s/w         up 
# new           yes                 s/w         up
# new           no                  h/w         up
# new            no                 s/w         up

#

#
#
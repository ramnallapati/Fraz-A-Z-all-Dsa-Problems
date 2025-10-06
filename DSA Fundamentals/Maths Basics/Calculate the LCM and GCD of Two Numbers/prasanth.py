size=input("what is your faverate size S,M or L? type y fpr yes and n for no")

pieces=input("do you want more pieces?type y for ")
chess=input("do you want more chess?type y for yes and n for no")
bill=0
if size=="S":
  bill+=3
  # small size pizza
elif size=="M":
  bill+=6
  # medium size pizza
elif size=="L":
  bill+=5
  # large size pizza
else:
  print("your inputs are worng")


  # todo:work in their to add in money in based on pieces.

  if pieces=="y":
    if size=="S":
      bill+=4
    else:
      print("clacluate in finallis:${bill}")
// first lab:


x = 3
y = 5
x + y

age = c(17,20,18,19,21)

mean(age)
median(age)
mode(age)

q1 = quantile(age, 0.25)
q1

p78 = quantile(age, 0.78)
p7

sd(age)

marks = c(1:10)
num_of_stds = c(2,3,5,6,8,7,6,5,4,2)
probability = num_of_stds/sum(num_of_stds)
Ex = sum(marks * probability)
Ex2 = sum(marks^2* probability)
Ex3 = sum(marks^3 * probability)
Ex4 = sum(marks^4* probability)

mu2 = Ex2 - Ex^2
mu3 = Ex3-3*Ex2*Ex+2*(Ex)^3
mu4 = Ex4-4*Ex3*Ex+6*Ex2*(Ex)^2-3*(Ex)^4
gamma1 = mu3/(mu2)^1.5
beta2=mu4/(mu2)^2


// Second lab:

# let x = Sum of faces;
# let f = frequency;
# let px = probability


x = c(2,3,4,5,6,7,8,9,10.,11,12)
f = c(1,2,3,4,5,6,5,1,3,2,1)
Px = f/sum(f)
Px

Ex = sum(x * Px)
Ex2 = sum(x^2 * Px)
Ex3 = sum(x^3 * Px)
Ex4 = sum(x^4 * Px)

mu2 = Ex2 - Ex^2
mu3 = Ex3-3*Ex2*Ex+2*(Ex)^3
mu4 = Ex4-4*Ex3*Ex+6*Ex2*(Ex)^2-3*(Ex)^4

gamma1 = mu3/(mu2)^1.5
#skewness:
gamma1
beta2=mu4/(mu2)^2
#kurtosis:
beta2

// third:

# let Program = Ai
# no. of students = f
# Pass = B

Ai = c("Science", "Management", "Humanities", "LaW", "Education", "Engineering","Medicine", "Agriculture", "Forestry")

f = c(4500, 85000, 9000, 7500, 28000, 7000, 10000, 1500, 1000)

Bpercent = c(55,35,40,50,25,70,85,80,90)

#PAi:
PAi = f/sum(f)
PAi

#PBgivenAi:
PBgivenAi = Bpercent/100
PBgivenAi

#PB:
PB = sum(PAi * PBgivenAi)
PB

#PAigivenB:

PAigivenB = (PAi * PBgivenAi) / PB
PAigivenB

#PAigivenBcomplement:

PAigivenBcomplement = 1 - PAigivenB
PAigivenBcomplement

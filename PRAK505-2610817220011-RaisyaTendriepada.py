def Profile(birth_year, name, origin):
    current_year = 2020
    age = current_year - birth_year
    print("My Name Is : " + name)
    print("My Age : " + str(age))
    print("My Batch Year Is : " + str(current_year))
    print("I Am From : " + origin)

#test case 1
birthYear1 = int(input())
A1 = input()
B1 = input()
Profile(birthYear1, A1, B1)

#test case 2
birthYear2 = int(input())
A2 = input()
B2 = input()
Profile(birthYear2, A2, B2)
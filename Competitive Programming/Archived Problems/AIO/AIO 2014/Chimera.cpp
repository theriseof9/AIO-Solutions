//
//  Done in python
//
//  Chimera.cpp
//  Competitive Programming
//
//  Created by Wang Zerui on 6/8/21.
//

fr = open('chimin.txt', 'r')
length = int(fr.readline())
lion = fr.readline()
snake =  fr.readline()
goat = fr.readline()
fr.close()
 
lion_score = 0
snake_score = 0
goat_score = 0
chim_length = 0
 
for x in range(length):
    if lion[x] == goat[x] and goat[x] == snake[x]:
        lion_score += 1
        snake_score += 1
        goat_score += 1
        chim_length += 1
    elif lion[x] == goat[x]:
        lion_score += 1
        goat_score += 1
        chim_length += 1
    elif goat[x] == snake[x]:
        goat_score += 1
        snake_score += 1
        chim_length += 1
    elif lion[x] == snake[x]:
        lion_score += 1
        snake_score += 1
        chim_length += 1
 
while chim_length < length:
    if lion_score <= goat_score and lion_score <= snake_score:
        lion_score += 1
    elif goat_score <= lion_score and goat_score <= snake_score:
        goat_score += 1
    elif snake_score <= lion_score and snake_score <= goat_score:
        snake_score += 1
    chim_length += 1
 
scores = [lion_score, goat_score, snake_score]
while max(scores) > min(scores)+1:
    lowest = min(scores)
    highest = max(scores)
 
    if lion_score == highest:
        lion_score -= 1
        if snake_score == lowest:
            snake_score += 1
            goat_score -= 1
        elif goat_score == lowest:
            goat_score += 1
            snake_score -= 1
 
    elif snake_score == highest:
        snake_score -= 1
        if goat_score == lowest:
            goat_score += 1
            lion_score -= 1
        elif lion_score == lowest:
            lion_score += 1
            goat_score -= 1
 
    elif goat_score == highest:
        goat_score -= 1
        if snake_score == lowest:
            snake_score += 1
            lion_score -= 1
        elif lion_score == lowest:
            lion_score += 1
            snake_score -= 1
 
    scores = [lion_score, goat_score, snake_score]
 
scores = [lion_score, goat_score, snake_score]
fw = open('chimout.txt', 'w')
fw.write(str(min(scores)))
fw.close()

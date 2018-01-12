# Week 1 Agenda
![Image](.other/pictures/fetch0.jpg) 
## Who am I?
- Your IA for 280, Fourth semester
- Senior CSE
- Robotics Research/Internship
- Sports, games, running, yoga, longboarding, old RA etc.

## General
- http://eecs280.org
- Nicknames
	- Tom
	- Trains
	- Fox
	- ~~Mom~~
- Helping outside of class/emailing me (email eecs280staff@umich.edu)
- Piazza
- Why or why not to come to lab
- "Shopping" lab sections

## Tips for this class
- By far most limiting factor in this class?
- Common pitfalls
	- Start early
	- Come to OH early
	- Submit early and often
	- Keep style up as you go
- Partner or nawe?
- Cheating?
- OH, 2-8pm all weekdays
- Recommend Computing for Computer Scientists class (EECS 398 I believe) if you want to just be more comfortable around a computer/terminal/linux etc.


## Developing, CAEN, and You
- General Workflow
	1. Develop/Debug on your machine
	2. Use git this whole time
	3. When ready to submit/pull over to CAEN and compile
	4. Fix any CAEN issues
	5. Submit
- Do Prof. DeOrio's setup: [Here](https://eecs280staff.github.io/p1-stats/setup.html)
- Come to OH or ask me after class for help

## `git`
#### Overview
![Image](.other/pictures/git_everthing_is_local.png)
#### [SSH Key Setup] (https://help.github.com/articles/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent/) = don't need to log in over and over
- For Windows, use ssh-keygen.exe instead of ssh-keygen

```bash
ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
# Press enter a view times (don't put a password)
cat ~/.ssh/id_rsa.pub
# Copy the output of this including the email
```
- Go to Gitlab -> Settings -> ssh keys 
- Paste in key

#### Initialize and start from new
```bash
git init
git remote add origin https://INSERTURLHERE
git push -u origin master
```

#### Clone from old
```bash
git clone https://INSERTURLHERE
```

#### Pushing
```bash
git add README.md junk.cpp #Insert any files here
git commit -m "Commit message goes here"
git push
```
#### Pulling
```bash
git pull
# Or
git fetch
git merge
```

## SSH
- [Here is resource page](http://caenfaq.engin.umich.edu/linux-login/how-do-i-connect-to-the-linux-login-service-using-secure-shell-ssh)
- login:

```bash
ssh tgroeche@login.engin.umich.edu
```
- Now you are in a CAEN terminal


## Linking/Makefiles
- What is it?
- Advantage?
- Simple Makefile and Linking example
- Makefile tutorial [Here](https://www.youtube.com/watch?v=uBe_PvY7QAw)
- Terminal tips can be found [Here](https://www.youtube.com/watch?v=or0UaQc7uAY)

## Worksheet
- No worksheet this week...
- Will be worksheet next week

## Project 1 Tips
- Use epsilon
```cpp
double epsilon = 0.0001;
assert(abs(result - correct_result) < epsilon);
```
- unsigned vs signed
- Setup is tricky, come to OH if you are struggling
- Tests and why
- LOOK AT THE REQUIRES CLAUSE FOR TESTING


## Closing Time
## NO LAB NEXT WEEK (MLK DAY MONDAY)

# Pololu 3Pi+ Labsheets

The following Labsheets will guide you to write code to operate your 3Pi+.  The Labsheets are designed to guide you through an incremental process of establishing the skills you need to operate the 3Pi+ robot to solve and evaluate difficult tasks.  If you have collected a Pololu 3Pi+ kit, you should have the following components:

<p align="center">
  <img src="https://github.com/paulodowd/EMATM0053_21_22/blob/main/images/3PI_Kit.png?raw=true">
</p>

- Please keep your 3Pi+ within it's box when it is not in use.  You are expected to return your robot in the same box.
- 4x AAA Batteries.
- The Pololu 3Pi+ mobile robot.
- A 2m USB Cable, with a micro B end.
- Black tape.

The focus of these labsheets is to solve the Line Following Challenge:

<p align="center">
<img width="50%" src="https://github.com/paulodowd/EMATM0053_21_22/blob/main/images/LineChallengeOverview.png?raw=true"> 
</p>

The above illustrates the Line Following Challenge.  You can recreate this line with the black tape provided, or <a href="https://github.com/paulodowd/EMATM0053_21_22/blob/main/PrintableSheets/LineFollowingMap.pdf">print the map</a>.  This line has been designed to present specific challenges to your robotic system development.  This Line Following Challenge can be broken down into the following elements:
- Driving in a straight line, from either starting box.
- Joining the Line at a 90&deg; angle.
- Traversing corners of various types: e.g. 45&deg;, 90&deg;, in either direction.
- Traversing curves, in either direction.
- Traversing a gap in the line, of a distance at least equal to the 3Pi+ box.
- Identifying the end of the line.
- Returning home (to where the robot started).
- Writing a general solution to solve the line traversal in either direction.

In approaching this task, you are encouraged to first of all simplify the problem(s) where necessary.  Later, you are encouraged to explore more difficult configurations of the line.  The objective of this task is to test and develop your skill.  You will later draw on your skill to produce an insightful and meaningful experiment with your 3Pi+ robot as part of your Summative Assessment for the unit.

The following additional materials are also available to you:
- A video demonstration of a solution to this Line Following Challenge is <a href="https://www.youtube.com/embed/IbfQaGqX-YU">available via Youtube.</a>
- A video demonstration of how quickly the line map can be made is also <a href="https://youtu.be/lNk7vgK9Fco">available via Youtube.</a>
- <a href="https://github.com/paulodowd/EMATM0053_21_22/tree/main/PrintableSheets">Printable A4 and A3 sheets</a> to help in your development and testing.
- An Arduino sketch template to help you get started (<a href="https://github.com/paulodowd/EMATM0053_21_22/tree/main/3PI_CodeStub">Github Page</a>, <a href="https://github.com/paulodowd/EMATM0053_21_22/raw/main/3PI_CodeStub/Labsheet_X.zip">Zip Download</a>).


# Labsheets

These labsheets will not provide you will the final solution for the Line Following Challenge.  Instead, they provide all the necessary "ingredients", and you have the creative task of a fully integrated solution.

### [![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L1_MeetThe3PI.ipynb)  [![nbviewer](https://raw.githubusercontent.com/jupyter/design/master/logos/Badges/nbviewer_badge.svg)](https://nbviewer.jupyter.org/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L1_MeetThe3PI.ipynb) Labsheet 1: Meet the 3Pi+ 

### [![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L2_Motors.ipynb)  [![nbviewer](https://raw.githubusercontent.com/jupyter/design/master/logos/Badges/nbviewer_badge.svg)](https://nbviewer.jupyter.org/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L2_Motors.ipynb) Labsheet 2: Motors 

### [![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L3_LineSensors.ipynb)  [![nbviewer](https://raw.githubusercontent.com/jupyter/design/master/logos/Badges/nbviewer_badge.svg)](https://nbviewer.jupyter.org/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L3_LineSensors.ipynb) Labsheet 3: Line Sensors 

### [![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L4_LineFollowing.ipynb)  [![nbviewer](https://raw.githubusercontent.com/jupyter/design/master/logos/Badges/nbviewer_badge.svg)](https://nbviewer.jupyter.org/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L4_LineFollowing.ipynb) Labsheet 4: Line Following 

### [![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L5_FiniteStateMachine.ipynb)  [![nbviewer](https://raw.githubusercontent.com/jupyter/design/master/logos/Badges/nbviewer_badge.svg)](https://nbviewer.jupyter.org/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L5_FiniteStateMachine.ipynb) Labsheet 5: Finite State Machine 

### [![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L6_Odometry.ipynb)  [![nbviewer](https://raw.githubusercontent.com/jupyter/design/master/logos/Badges/nbviewer_badge.svg)](https://nbviewer.jupyter.org/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L6_Odometry.ipynb) Labsheet 6: Odometry 

### [![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L7_PID.ipynb)  [![nbviewer](https://raw.githubusercontent.com/jupyter/design/master/logos/Badges/nbviewer_badge.svg)](https://nbviewer.jupyter.org/github/paulodowd/EMATM0053_21_22/blob/main/Labsheets/Core/L7_PID.ipynb) Labsheet 7: PID 

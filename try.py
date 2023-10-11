import tkinter as tk
from tkinter import messagebox

def calculate_percentage(marks, total_marks):
  return marks / total_marks

def is_slow_learner(percentage, avg_percentage):
  return percentage < avg_percentage

def get_student_data():
  marks = int(marks_entry.get())
  total_marks = int(total_marks_entry.get())
  memory_test_score = int(memory_test_score_entry.get())
  timed_comprehension_quiz_score = int(timed_comprehension_quiz_score_entry.get())
  listening_task_score = int(listening_task_score_entry.get())
  reading_writing_task_score = int(reading_writing_task_score_entry.get())
  return [marks, total_marks, memory_test_score, timed_comprehension_quiz_score, listening_task_score, reading_writing_task_score]

def determine_slow_learner():
  student_data = get_student_data()
  percentage = calculate_percentage(student_data[0], student_data[1])
  avg_percentage = 50
  is_slow_learner_bool = is_slow_learner(percentage, avg_percentage)
  if is_slow_learner_bool:
    messagebox.showinfo("Result", "The student is a slow learner.")
  else:
    messagebox.showinfo("Result", "The student is not a slow learner.")

# Create the main window
root = tk.Tk()
root.title("Slow Learner Determination")

# Create the labels and entry fields
marks_label = tk.Label(root, text="Marks:")
marks_entry = tk.Entry(root)
total_marks_label = tk.Label(root, text="Total Marks:")
total_marks_entry = tk.Entry(root)
memory_test_score_label = tk.Label(root, text="Memory Test Score:")
memory_test_score_entry = tk.Entry(root)
timed_comprehension_quiz_score_label = tk.Label(root, text="Timed Comprehension Quiz Score:")
timed_comprehension_quiz_score_entry = tk.Entry(root)
listening_
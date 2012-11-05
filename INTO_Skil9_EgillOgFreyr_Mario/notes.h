// Assignment 9. ARDUINO PROGRAMMING - INTO
// Last modification: 1.11.2012
// Authors:
//  Freyr Bergsteinsson <freyrb12@ru.is>
//  Egill Bjornsson <egillb12@ru.is>

// Notes include file
// Contains a list of known notes and their frequencies, and a list of note lengths.
// Also contains the struct for a song part

enum Note
{
  c3 = 0, cs3 = 1, d_3 = 1, d3 = 2, ds3 = 3,
  e_3 = 3, e3 = 4, es3 = 5, f_3 = 4, f3 = 5, fs3 = 6,
  g_3 = 6, g3 = 7, gs3 = 8, a_3 = 8, a3 = 9, as3 = 10,
  b_3 = 10, b3 = 11, bs3 = 12, c_4 = 11, c4 = 12, cs4 = 13,
  d_4 = 13, d4 = 14, ds4 = 15, e_4 = 15, e4 = 16, es4 = 17,
  f_4 = 16, f4 = 17, fs4 = 18, g_4 = 18, g4 = 19, gs4 = 20,
  a_4 = 20, a4 = 21, as4 = 22, b_4 = 22, b4 = 23, bs4 = 24,
  c_5 = 23, c5 = 24, cs5 = 25, d_5 = 25, d5 = 26, ds5 = 27,
  e_5 = 27, e5 = 28, es5 = 29, f_5 = 28, f5 = 29, fs5 = 30,
  g_5 = 30, g5 = 31, gs5 = 32, a_5 = 32, a5 = 33, as5 = 34,
  b_5 = 34, b5 = 35, bs5 = 36, c_6 = 35, c6 = 36, rest = 37
};

// Length of notes, in ms
enum NoteLength
{
  en = 75, // Eigth-part note
  qn = 150, // Quarter note
  hn = 300, // Half note
  hnt = 200, // Half note triplet
  wn = 600 // Whole note
};

// List of frequencies for each note, starting with C3, up to C6
const float note_freq[38] =
{ 130.81, 138.59, 146.83, 155.56, 164.81, 174.61, 185.00, 196.00, // c3-g3
  207.65, 220.00, 233.08, 246.94, 261.63, 277.18, 293.66, 311.13, // gs3-ds4
  329.63, 349.23, 369.99, 392.00, 415.30, 440.00, 466.16, 493.88, // e4-b4
  523.25, 554.37, 587.33, 622.25, 659.26, 698.46, 739.99, 783.99, // c5-g5
  830.61, 880.00, 932.33, 987.77, 1046.50, 0.0                    // gs5-c6
};

struct songPart
{
  int numberOfNotes;
  const Note *notes;
  const NoteLength *lengths;
};


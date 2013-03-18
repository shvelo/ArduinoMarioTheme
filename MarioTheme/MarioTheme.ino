// Play the Mario Bros theme song

#include "notes.h"

// According to the music sheets, there are 19 parts, an intro and then 9 parts repeated
const int numberOfSongParts = 20;

// How many notes there are in each defined song part
const int introNotes = 14;
const int page1Notes = 54;
const int page2Notes = 60;
const int page4Notes = 54;
const int page6Notes = 55;

// List of notes in the intro
const Note notesIntro[introNotes] =
{
  e4, e4, rest, e4, rest, c4, e4, rest, g4, rest, rest, g3, rest, rest, // 14
};

// List of notes in song part 1
const Note notesPage1[page1Notes] =
{
  c4, rest, g3, rest, e3, rest, a3, rest, b3, rest, b_3, a3, rest, // 13
  g3, e4, g4, a4, rest, f4, g4, rest, e4, rest, c4, d4, b3, rest,  // 14
  c4, rest, g3, rest, e3, rest, a3, rest, b3, rest, b_3, a3, rest, // 13
  g3, e4, g4, a4, rest, f4, g4, rest, e4, rest, c4, d4, b3, rest,  // 14 = 54
};

// List of notes in song part 2
const Note notesPage2[page2Notes] =
{
  c3, rest, g4, g_4, f4, ds4, rest, e4, rest, gs3, a3, c4, rest, a3, c4, d4, // 16
  c3, rest, g4, g_4, f4, ds4, rest, e4, rest, c5, rest, c5, c5, rest, rest,  // 15
  c3, rest, g4, g_4, f4, ds4, rest, e4, rest, gs3, a3, c4, rest, a3, c4, d4, // 16
  c3, rest, e_4, rest, d4, rest, c4, rest, g3, g3, rest, c3, rest,           // 13 = 60
};

// Song part 3 is the same as part 2

// List of notes in song part 4
const Note notesPage4[page4Notes] =
{
  c4, c4, rest, c4, rest, c4, d4, rest, e4, c4, rest, a3, g3, rest, rest, // 15
  c4, c4, rest, c4, rest, c4, d4, e4, rest, rest,                         // 10
  c4, c4, rest, c4, rest, c4, d4, rest, e4, c4, rest, a3, g3, rest, rest, // 15
  e4, e4, rest, e4, rest, c4, e4, rest, g4, rest, rest, g3, rest, rest,   // 14 = 54
};

// Song part 5 is the same as part 1

// List of notes in song part 6
const Note notesPage6[page6Notes] = 
{
  e4, c4, rest, g3, rest, gs3, rest, a3, f4, rest, f4, a3, rest, rest, // 14
  b3, a4, a4, a4, g4, f4, e4, c4, rest, a3, g3, rest, rest,            // 13
  e4, c4, rest, g3, rest, gs3, rest, a3, f4, rest, f4, a3, rest, rest, // 14
  b3, f4, rest, f4, f4, e4, d4, c4, e3, rest, e3, c3, rest, rest,      // 14 = 55
};

// Song part 7 is the same as part 6
// Song part 8 is the same as part 4
// Song part 9 is the same as part 6

// The length of the notes in the intro
const NoteLength noteLengthsIntro[introNotes] =
{
  qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, hn, qn, qn, hn,
};

// The length of the notes in song part 1
const NoteLength noteLengthsPage1[page1Notes] =
{
  qn, hn, qn, hn, qn, hn, qn, qn, qn, qn, qn, qn, qn,
  hnt, hnt, hnt, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, hn,
  qn, hn, qn, hn, qn, hn, qn, qn, qn, qn, qn, qn, qn,
  hnt, hnt, hnt, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, hn,
};

// The length of the notes in song part 2
const NoteLength noteLengthsPage2[page2Notes] =
{
  qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn,
  qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, hn,
  qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn,
  qn, qn, qn, hn, qn, hn, qn, hn, qn, qn, qn, qn, qn,
};

// The length of the notes in song part 4
const NoteLength noteLengthsPage4[page4Notes] =
{
  qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, hn,
  qn, qn, qn, qn, qn, qn, qn, qn, wn, wn,
  qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, hn,
  qn, qn, qn, qn, qn, qn, qn, qn, qn, qn, hn, qn, qn, hn,
};

// The length of the notes in song part 6
const NoteLength noteLengthsPage6[page6Notes] =
{
  qn, qn, qn, qn, hn, qn, qn, qn, qn, qn, qn, qn, qn, hn,
  hnt, hnt, hnt, hnt, hnt, hnt, qn, qn, qn, qn, qn, qn, hn,
  qn, qn, qn, qn, hn, qn, qn, qn, qn, qn, qn, qn, qn, hn,
  qn, qn, qn, qn, hnt, hnt, hnt, qn, qn, qn, qn, qn, qn, hn,
};

// List of song parts that make up the whole song
const songPart songParts[numberOfSongParts] = {
  { introNotes, notesIntro, noteLengthsIntro },
  { page1Notes, notesPage1, noteLengthsPage1 },
  { page2Notes, notesPage2, noteLengthsPage2 },
  { page2Notes, notesPage2, noteLengthsPage2 },
  { page4Notes, notesPage4, noteLengthsPage4 },
  { page1Notes, notesPage1, noteLengthsPage1 },
  { page6Notes, notesPage6, noteLengthsPage6 },
  { page6Notes, notesPage6, noteLengthsPage6 },
  { page4Notes, notesPage4, noteLengthsPage4 },
  { page6Notes, notesPage6, noteLengthsPage6 },
  { page1Notes, notesPage1, noteLengthsPage1 },
  { page2Notes, notesPage2, noteLengthsPage2 },
  { page2Notes, notesPage2, noteLengthsPage2 },
  { page4Notes, notesPage4, noteLengthsPage4 },
  { page1Notes, notesPage1, noteLengthsPage1 },
  { page6Notes, notesPage6, noteLengthsPage6 },
  { page6Notes, notesPage6, noteLengthsPage6 },
  { page4Notes, notesPage4, noteLengthsPage4 },
  { page6Notes, notesPage6, noteLengthsPage6 }, 
};

const int buzzerPin    =  8; // Output pin for the buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT); 
}

// Play a sound with a specific frequency for a specified length
// Set frequency to 0 for no sound
// Based on http://www.faludi.com/itp/arduino/buzzer_example.pde
void buzz(int targetPin, long frequency, long length) {
  if (frequency == 0.0)
  {
    digitalWrite(targetPin,LOW);
    delay( length );
  }
  else
  {
    long delayValue = 1000000/frequency/2;
    long numCycles = frequency * length/ 1000;

    for (long i=0; i < numCycles; i++)
    {
      digitalWrite(targetPin,HIGH);
      delayMicroseconds(delayValue);
      digitalWrite(targetPin,LOW);
      delayMicroseconds(delayValue);
    }
  }
}

// Play a song part
// Takes the number of notes in the song part as input, as well as an array of note
// frequencies and an array of note lengths
void playSongPart( int numberOfNotes, const Note *notes, const NoteLength *lengths)
{
  for (int note = 0; note < numberOfNotes; note++)
  {
    buzz( buzzerPin, note_freq[notes[note]], lengths[note] );
  }
}

void loop() {
  for (int currentSongPart = 0; currentSongPart < numberOfSongParts; currentSongPart++) {
      playSongPart( songParts[currentSongPart].numberOfNotes,
                    songParts[currentSongPart].notes,
                    songParts[currentSongPart].lengths );
  }
  delay(30);
}

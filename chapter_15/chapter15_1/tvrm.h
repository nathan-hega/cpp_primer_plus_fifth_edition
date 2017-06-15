#ifndef TVFM_H
#define TVFM_H

class Tv;

class Remote {
  public:
    friend class Tv;
    enum State{Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, VCR};
    enum {Normal, Interactive};
  private:
    int mode;
    int state;
  public:
    Remote (int m = TV, int s = Normal) : mode(m), state(s) {}
    bool volup (Tv & t);
    bool voldown (Tv & t);
    void onoff (Tv & t);
    void chanup (Tv & t);
    void chandown (Tv & t);
    void setmode (Tv & t);
    void set_input (Tv & t);
    void set_chan (Tv & t, int c);
    void display_state ();
};

class Tv {
  public:
    friend class Remote;
    enum State{Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, VCR};

    Tv (int s = Off, int mc = 100) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() { state = (state == On) ? Off : On; }
    bool ison () const { return state == On; }
    bool volup ();
    bool voldown ();
    void chanup ();
    void chandown ();
    void set_mode () { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input () { input = (input == TV) ? VCR : TV; }
    void settings () const;
    bool set_state (Remote & r);
  private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
};

// Remote methods as inline functions
inline bool Remote::volup (Tv & t) { return t.volup(); }
inline bool Remote::voldown (Tv & t) { return t.voldown(); }
inline void Remote::onoff (Tv & t) { t.onoff(); }
inline void Remote::chanup (Tv & t) { t.chanup(); }
inline void Remote::chandown (Tv & t) { t.chandown(); }
inline void Remote::setmode (Tv & t) { t.set_mode(); }
inline void Remote::set_input (Tv & t) { t.set_input(); }
inline void Remote::set_chan (Tv & t, int c) { t.channel = c; }

#endif

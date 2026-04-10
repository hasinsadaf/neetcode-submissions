/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:

    static bool comp(Interval a, Interval b){
        return a.start<b.start;
    }

    bool canAttendMeetings(vector<Interval>& intervals) {
        if(intervals.size()==0 || intervals.size()==1){
            return true;
        }
        sort(intervals.begin(),intervals.end(),comp);
        int s=intervals[0].start,e=intervals[0].end;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i].start==s || intervals[i].end<=e || intervals[i].start<e){
                return false;
            }
            else{
                s=intervals[i].start;
                e=intervals[i].end;
            }
        }
        return true;
    }
};

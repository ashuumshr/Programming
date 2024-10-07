def activity_selection(start_times, end_times):
    # List to store the selected activities
    selected_activities = []

    # Pair the start and end times and sort activities based on end times
    activities = sorted(zip(start_times, end_times), key=lambda x: x[1])

    # The first activity always gets selected
    selected_activities.append(activities[0])
    last_selected_end_time = activities[0][1]

    # Iterate through the sorted activities
    for i in range(1, len(activities)):
        # If the start time of the current activity is greater than or equal to
        # the end time of the last selected activity, select this activity
        if activities[i][0] >= last_selected_end_time:
            selected_activities.append(activities[i])
            last_selected_end_time = activities[i][1]

    return selected_activities

# Example usage
if __name__ == "__main__":
    start_times = [1, 3, 0, 5, 8, 5]
    end_times = [2, 4, 6, 7, 9, 9]
    selected = activity_selection(start_times, end_times)
    print("The selected activities are:")
    for activity in selected:
        print(f"Activity with start time {activity[0]} and end time {activity[1]}")

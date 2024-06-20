formatDateTime(items('startDateTime')?['Task Creation Date'], 'yyyy-MM-dd HH:mm')

@{items('Apply_to_each')?['createdDateTime']}

@{formatDateTime(items('Apply_to_each')?['createdDateTime'], 'yyyy-MM-dd HH:mm')}

coalesce(formatDateTime(items('Apply_to_each')?['createdDateTime'], 'MMMM d, yyyy HH:mm'), '')


@{if(empty(items('For_each')?['createdDateTime']), ' ', formatDateTime(items('For_each')?['createdDateTime'], 'MMMM d, yyyy HH:mm'))}
@{coalesce(formatDateTime(items('Apply_to_each')?['createdDateTime'], 'MMMM d, yyyy HH:mm'), '')}
@{formatDateTime(items('Apply_to_each')?['createdDateTime'], 'MMMM d, yyyy HH:mm')}




@{if(empty(items('Apply_to_each')?['startDateTime']), ' ', formatDateTime(items('Apply_to_each')?['startDateTime'], 'MMMM d, yyyy HH:mm'))}
@{coalesce(formatDateTime(items('Apply_to_each')?['startDateTime'], 'MMMM d, yyyy HH:mm'), '')}
@{formatDateTime(items('Apply_to_each')?['startDateTime'], 'MMMM d, yyyy HH:mm')}


@{if(empty(items('Apply_to_each')?['dueDateTime']), ' ', formatDateTime(items('Apply_to_each')?['dueDateTime'], 'MMMM d, yyyy HH:mm'))}
@{coalesce(formatDateTime(items('Apply_to_each')?['dueDateTime'], 'MMMM d, yyyy HH:mm'), '')}
@{formatDateTime(items('Apply_to_each')?['dueDateTime'], 'MMMM d, yyyy HH:mm')}


@{formatDateTime(items('Apply_to_each')?['completedDateTime'], 'MMMM d, yyyy HH:mm')}






@{if(empty(items('Apply_to_each')?['completedDateTime']), ' ', formatDateTime(items('Apply_to_each')?['completedDateTime'], 'MMMM d, yyyy HH:mm'))}


empty(items('Apply_to_each')?['completedDateTime'])
@{if(empty(items('Apply_to_each')?['completedDateTime']), ' ', formatDateTime(items('Apply_to_each')?['completedDateTime'], 'MMMM d, yyyy HH:mm'))}
@{outputs(items('Apply_to_each'))?['body/displayName']}
@{outputs(items('Apply_to_each'))?['body/accountEnabled']}


zO7CP6W0FUqcf08EFXj6lpcACIOJ









@{outputs('Get_user_profile')?['body/displayName']}  @{outputs('Get_user_profile')?['body/accountEnabled']}












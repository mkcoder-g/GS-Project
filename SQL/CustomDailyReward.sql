USE [MuOnline]
GO

CREATE TABLE CustomDailyReward (
	[AccountID] [varchar](11) NOT NULL,
	[Year] [int] NOT NULL,
	[Month] [int] NOT NULL,
	[Day] [int] NOT NULL
) ON [PRIMARY]
GO